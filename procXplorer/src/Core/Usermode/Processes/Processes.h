#pragma once


struct WindowSearchContext
{
    DWORD pid;
    std::string title;
};


struct CpuSample
{
    ULONGLONG procTime;
    ULONGLONG sysTime;
};


struct ProcessInfo
{
    int pid;
    std::string name;
    std::string user;
    std::string windowTitle;
    float cpu;
    float memory;
    std::string status;
    std::string startTime;
    bool admin;
    std::vector<ProcessInfo> children;
};


typedef struct _PROCESS_BASIC_INFORMATION {
    PVOID Reserved1;
    PVOID PebBaseAddress;
    PVOID Reserved2[2];
    ULONG_PTR UniqueProcessId;
    ULONG_PTR InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION;

typedef NTSTATUS(WINAPI* pNtQueryInformationProcess)(
    HANDLE,
    ULONG,
    PVOID,
    ULONG,
    PULONG
    );

extern std::vector<ProcessInfo> processes;


std::vector<ProcessInfo> GetProcesses();





//kill/end

bool EndProcess(int pid);
bool ForceEndProcess(int pid);