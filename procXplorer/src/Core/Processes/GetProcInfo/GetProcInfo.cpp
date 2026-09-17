#include <windows.h>
#include <tlhelp32.h>
#include <iostream>
#include <vector>

#include "GetProcInfo.h"
#include "../../globals.h"
#include "../../Utils/Utils.h"


ULONGLONG UpdateSystemCpuDelta()
{
    FILETIME idleTime;
    FILETIME kernelTime;
    FILETIME userTime;

    if (!GetSystemTimes(&idleTime, &kernelTime, &userTime))
    {
        return 0;
    }

    ULONGLONG currentKernel = FileTimeToUint64(kernelTime);
    ULONGLONG currentUser = FileTimeToUint64(userTime);

    if (s_lastSystemKernel == 0 && s_lastSystemUser == 0)
    {
        s_lastSystemKernel = currentKernel;
        s_lastSystemUser = currentUser;
        return 0;
    }

    ULONGLONG sysDelta = (currentKernel - s_lastSystemKernel) + (currentUser - s_lastSystemUser);
    s_lastSystemKernel = currentKernel;
    s_lastSystemUser = currentUser;

    return sysDelta;
}

double getCpuUsagePercentage(HANDLE hPQLI, uint32_t pid, ULONGLONG systemDeltaTime)
{
    if (systemDeltaTime == 0 || !hPQLI || pid == 0)
    {
        return 0.0;
    }

    FILETIME ftCreation, ftExit, ftKernel, ftUser;
    if (!GetProcessTimes(hPQLI, &ftCreation, &ftExit, &ftKernel, &ftUser))
    {
        return 0.0;
    }

    ULONGLONG currentKernel = FileTimeToUint64(ftKernel);
    ULONGLONG currentUser = FileTimeToUint64(ftUser);

    auto it = g_cpuHistory.find(pid);
    if (it == g_cpuHistory.end())
    {
        g_cpuHistory[pid] = { currentKernel, currentUser };
        return 0.0;
    }

    ULONGLONG procKernelDelta = currentKernel - it->second.lastKernelTime;
    ULONGLONG procUserDelta = currentUser - it->second.lastUserTime;
    ULONGLONG procTotalDelta = procKernelDelta + procUserDelta;

    it->second.lastKernelTime = currentKernel;
    it->second.lastUserTime = currentUser;

    double percent = ((double)procTotalDelta / (double)systemDeltaTime) * 100.0;
    return (percent > 100.0) ? 100.0 : percent;
}

double getRamUsagePercentage()
{
    return 0.0;
}

double getGpuUsagePercentage()
{
    return 0.0;
}

uint32_t getHandleCount()
{
    return 0;
}

uint32_t getGDICount()
{
    return 0;
}

uint32_t getUOCount()
{
    return 0;
}