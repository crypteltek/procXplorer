#include <windows.h>
#include <unordered_map>
#include <tlhelp32.h>
#include <psapi.h>
#include <vector>
#include <string>
#include <iostream>

#include "Processes.h"
#include "../../Utils/Utils.h"



std::vector<ProcessInfo> processes = {};

bool IsAdmin(HANDLE hToken)
{
    if (!OpenProcessToken(hToken, TOKEN_QUERY, &hToken))
    {
        return false;
    }

    TOKEN_ELEVATION elevation;
    DWORD dwSize;

    if (!GetTokenInformation(hToken, TokenElevation, &elevation, sizeof(elevation), &dwSize))
    {
        return false;
    }

    if (elevation.TokenIsElevated)
    {
        return true;
    }

    return false;
}

float GetProcessCpuUsage(HANDLE hProcess)
{
    static std::unordered_map<DWORD, CpuSample> cache;  // Changed from HANDLE to DWORD
    static DWORD cpuCount = [] {
        SYSTEM_INFO si;
        GetSystemInfo(&si);
        return si.dwNumberOfProcessors;
        }();

    DWORD pid = GetProcessId(hProcess);  // Get PID to use as key
    if (!pid)
        return 0.0f;

    FILETIME ftCreate, ftExit, ftKernel, ftUser;
    if (!GetProcessTimes(hProcess, &ftCreate, &ftExit, &ftKernel, &ftUser))
        return 0.0f;

    FILETIME ftIdle, ftSysKernel, ftSysUser;
    if (!GetSystemTimes(&ftIdle, &ftSysKernel, &ftSysUser))
        return 0.0f;

    ULONGLONG procTime =
        (reinterpret_cast<ULONGLONG&>(ftKernel)) +
        (reinterpret_cast<ULONGLONG&>(ftUser));

    ULONGLONG sysTime =
        (reinterpret_cast<ULONGLONG&>(ftSysKernel)) +
        (reinterpret_cast<ULONGLONG&>(ftSysUser));

    auto& sample = cache[pid];  // Use PID instead of HANDLE

    if (sample.procTime == 0 || sample.sysTime == 0)
    {
        sample.procTime = procTime;
        sample.sysTime = sysTime;
        return 0.0f;
    }

    ULONGLONG procDelta = procTime - sample.procTime;
    ULONGLONG sysDelta = sysTime - sample.sysTime;

    sample.procTime = procTime;
    sample.sysTime = sysTime;

    if (sysDelta == 0)
        return 0.0f;

    return static_cast<float>(
        (procDelta * 100.0) / sysDelta  // Removed the cpuCount division
        );
}

std::string GetProcessStartTimeString(HANDLE hProcess)
{
    FILETIME ftCreate, ftExit, ftKernel, ftUser;
    if (!GetProcessTimes(hProcess, &ftCreate, &ftExit, &ftKernel, &ftUser))
        return ""; // failure

    SYSTEMTIME stUTC, stLocal;
    if (!FileTimeToSystemTime(&ftCreate, &stUTC))
        return "";

    if (!SystemTimeToTzSpecificLocalTime(nullptr, &stUTC, &stLocal))
        return "";

    char buffer[32];
    snprintf(
        buffer,
        sizeof(buffer),
        "%04u-%02u-%02u %02u:%02u:%02u",
        stLocal.wYear,
        stLocal.wMonth,
        stLocal.wDay,
        stLocal.wHour,
        stLocal.wMinute,
        stLocal.wSecond
    );

    return buffer;
}


float GetProcessPrivateRamMB(HANDLE hProcess)
{
    PROCESS_MEMORY_COUNTERS_EX pmc;

    if (!GetProcessMemoryInfo(
        hProcess,
        reinterpret_cast<PROCESS_MEMORY_COUNTERS*>(&pmc),
        sizeof(pmc)))
        return 0.0f;

    return static_cast<float>(pmc.PrivateUsage) / (1024.0f * 1024.0f);
}

BOOL CALLBACK EnumWindowsProc(HWND hwnd, LPARAM lParam)
{
    WindowSearchContext* ctx =
        reinterpret_cast<WindowSearchContext*>(lParam);

    DWORD windowPid = 0;
    GetWindowThreadProcessId(hwnd, &windowPid);

    if (windowPid != ctx->pid)
        return TRUE;

    if (!IsWindowVisible(hwnd))
        return TRUE;

    if (GetWindow(hwnd, GW_OWNER) != NULL)
        return TRUE;

    char title[256];
    if (GetWindowTextA(hwnd, title, sizeof(title)) == 0)
        return TRUE;

    ctx->title = title;
    return FALSE;
}

std::string GetProcessWindowTitle(HANDLE hProcess)
{
    DWORD pid = GetProcessId(hProcess);
    if (!pid)
        return "";

    WindowSearchContext ctx{};
    ctx.pid = pid;

    EnumWindows(EnumWindowsProc, reinterpret_cast<LPARAM>(&ctx));
    return ctx.title;
}



std::string GetProcessOwner(HANDLE hProcess)
{
    HANDLE hToken = nullptr;
    if (!OpenProcessToken(hProcess, TOKEN_QUERY, &hToken))
        return "";

    DWORD size = 0;
    GetTokenInformation(hToken, TokenUser, nullptr, 0, &size);
    if (GetLastError() != ERROR_INSUFFICIENT_BUFFER)
    {
        CloseHandle(hToken);
        return "";
    }

    TOKEN_USER* tokenUser = (TOKEN_USER*)malloc(size);
    if (!tokenUser)
    {
        CloseHandle(hToken);
        return "";
    }

    if (!GetTokenInformation(hToken, TokenUser, tokenUser, size, &size))
    {
        free(tokenUser);
        CloseHandle(hToken);
        return "";
    }

    char name[256] = {};
    char domain[256] = {};
    DWORD nameLen = sizeof(name);
    DWORD domainLen = sizeof(domain);
    SID_NAME_USE sidType;

    if (!LookupAccountSidA(
        nullptr,
        tokenUser->User.Sid,
        name,
        &nameLen,
        domain,
        &domainLen,
        &sidType))
    {
        free(tokenUser);
        CloseHandle(hToken);
        return "";
    }

    free(tokenUser);
    CloseHandle(hToken);

    std::string user;
    if (domainLen > 0)
        user = std::string(domain) + "\\" + std::string(name);
    else
        user = std::string(name);

    return user;
}



std::vector<ProcessInfo> GetProcesses()
{
    std::vector<ProcessInfo> processes;

    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnapshot == INVALID_HANDLE_VALUE) return processes;

    PROCESSENTRY32 pe;
    pe.dwSize = sizeof(PROCESSENTRY32);

    if (Process32First(hSnapshot, &pe))
    {
        do
        {
            HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, pe.th32ProcessID);
            if (hProcess)
            {
                ProcessInfo p;
                p.pid = pe.th32ProcessID;
                p.admin = IsAdmin(hProcess);
                p.name = WStringToString(pe.szExeFile);
                p.cpu = GetProcessCpuUsage(hProcess);
                p.startTime = GetProcessStartTimeString(hProcess);
                p.memory = GetProcessPrivateRamMB(hProcess);
                p.windowTitle = GetProcessWindowTitle(hProcess);
                p.status = "Running";
                p.user = GetProcessOwner(hProcess);

                processes.push_back(p);
                CloseHandle(hProcess);
            }
        } while (Process32Next(hSnapshot, &pe));
    }

    CloseHandle(hSnapshot);
    return processes;
}






bool EndProcess(int pid)
{
    HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, pid);
    if (!hProcess)
    {
        return false;
    }

    if (!TerminateProcess(hProcess, 0)) {
        CloseHandle(hProcess);
        return false;
    }

    CloseHandle(hProcess);
    return true;
}


bool ForceEndProcess(int pid)
{
    HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, pid);
    if (!hProcess)
    {
        return false;
    }

    if (!TerminateProcess(hProcess, 1)) {
        CloseHandle(hProcess);
        return false;
    }

    CloseHandle(hProcess);
    return true;

}
