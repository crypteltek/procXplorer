#pragma once
#include <windows.h>
#include <unordered_map>
#include <unordered_set>
#include <cstdint>

struct ProcessCpuHistory
{
    ULONGLONG lastKernelTime = 0;
    ULONGLONG lastUserTime = 0;
};

static ULONGLONG s_lastSystemKernel = 0;
static ULONGLONG s_lastSystemUser = 0;


inline std::unordered_map<uint32_t, ProcessCpuHistory> g_cpuHistory;

ULONGLONG UpdateSystemCpuDelta();
double getCpuUsagePercentage(HANDLE hPQLI, uint32_t pid, ULONGLONG systemDeltaTime);
