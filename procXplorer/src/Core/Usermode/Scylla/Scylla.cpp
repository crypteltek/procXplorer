#include <iostream>
#include <filesystem>
#include <cstdlib>
#include <windows.h>

#include "ScyllaBinaries.h"

bool IsScyllaOnDisk()
{
    char* temp = nullptr;
    size_t len = 0;

    if (_dupenv_s(&temp, &len, "APPDATA") != 0 || temp == nullptr) {
        return false;
    }
	std::filesystem::path ScyllaPath = std::filesystem::path(temp) / "procXplorer/scylla/Scylla_x64.exe";
    free(temp);

	if (std::filesystem::exists(ScyllaPath)) {
		return true;
	}

	return false;
}


bool CreateScyllaFiles()
{
    char* temp = nullptr;
    size_t len = 0;

    if (_dupenv_s(&temp, &len, "APPDATA") != 0 || temp == nullptr) {
        return false;
    }

    std::filesystem::path ScyllaPath = std::filesystem::path(temp) / "procXplorer/scylla";
    free(temp);
    if (!std::filesystem::exists(ScyllaPath)) {
        std::filesystem::create_directories(ScyllaPath);
    }

    std::filesystem::path ScyllaDLL = ScyllaPath / "Scylla_x64.dll";
    std::filesystem::path ScyllaEXE = ScyllaPath / "Scylla_x64.exe";

    HANDLE hDllFile = CreateFileA(
        ScyllaDLL.string().c_str(),
        GENERIC_WRITE,
        0,
        nullptr,
        CREATE_ALWAYS,
        FILE_ATTRIBUTE_NORMAL,
        nullptr
    );
    if (hDllFile == INVALID_HANDLE_VALUE) return false;

    DWORD written = 0;
    BOOL ok = WriteFile(hDllFile, Scylladll, sizeof(Scylladll), &written, nullptr);
    if (!ok || written != sizeof(Scylladll)) {
        CloseHandle(hDllFile);
        return false;
    }
    CloseHandle(hDllFile);

    HANDLE hExeFile = CreateFileA(
        ScyllaEXE.string().c_str(),
        GENERIC_WRITE,
        0,
        nullptr,
        CREATE_ALWAYS,
        FILE_ATTRIBUTE_NORMAL,
        nullptr
    );
    if (hExeFile == INVALID_HANDLE_VALUE) return false;

    ok = WriteFile(hExeFile, Scyllaexe, sizeof(Scyllaexe), &written, nullptr);
    if (!ok || written != sizeof(Scyllaexe)) {
        CloseHandle(hExeFile);
        return false;
    }
    CloseHandle(hExeFile);

    return true;
}



bool OpenScylla()
{
    char* temp = nullptr;
    size_t len = 0;
    if (_dupenv_s(&temp, &len, "APPDATA") != 0 || temp == nullptr) {
        return false;
    }
    std::filesystem::path ScyllaPath = std::filesystem::path(temp) / "procXplorer/scylla/Scylla_x64.exe";
    free(temp);
    ShellExecuteA(nullptr, "open", ScyllaPath.string().c_str(), nullptr, nullptr, SW_SHOWNORMAL);

}