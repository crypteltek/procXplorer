#include <windows.h>

#include "Utils.h"



ULONGLONG CalculateSystemDeltaTime()
{
    FILETIME idleTime, kernelTime, userTime;
    if (!GetSystemTimes(&idleTime, &kernelTime, &userTime))
    {
        return 0;
    }

    ULONGLONG currentSystemTotal = FileTimeToUint64(kernelTime) + FileTimeToUint64(userTime);

    ULONGLONG delta = 0;
    if (g_prevSystemTotalTime != 0 && currentSystemTotal > g_prevSystemTotalTime)
    {
        delta = currentSystemTotal - g_prevSystemTotalTime;
    }

    g_prevSystemTotalTime = currentSystemTotal;
    return delta;
}