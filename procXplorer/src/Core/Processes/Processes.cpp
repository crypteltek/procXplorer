#include <windows.h>
#include <tlhelp32.h>
#include <iostream>
#include <vector>


#include "Processes.h"
#include "../globals.h"
#include "../Utils/Utils.h"
#include "GetProcInfo/GetProcInfo.h"



struct CTH32SGetAll
{
	uint32_t th32ProcessID = 0;
	std::string szExeFile = "";
	uint32_t th32ParentProcessID = 0;
	int cntThreads = 0;
	int pcPriClassBase = 0;
};



std::vector<CTH32SGetAll> GetAllProcessIDs()
{
	std::vector<CTH32SGetAll> pids;

	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (hSnapshot == INVALID_HANDLE_VALUE) // failsafe if hSnapshot does not contain anything
	{
		return pids;
	}

	PROCESSENTRY32 pe;
	pe.dwSize = sizeof(PROCESSENTRY32);

	if (Process32First(hSnapshot, &pe))
	{
		do  // use "do{}" to not skip the first pid (if we do "while (Process32Next(hSnapshot, &pe)); {pids.push_back(entry);}" it will first do next and then push the pid so it wont catch the first one
		{
			CTH32SGetAll entry;
			entry.th32ProcessID = static_cast<uint32_t>(pe.th32ProcessID);
			entry.szExeFile = WideToNarrow(pe.szExeFile);
			entry.th32ParentProcessID = static_cast<uint32_t>(pe.th32ParentProcessID);
			entry.cntThreads = static_cast<int>(pe.cntThreads);
			entry.pcPriClassBase = static_cast<int>(pe.pcPriClassBase);
			pids.push_back(entry);
		} while (Process32Next(hSnapshot, &pe));
	}

	CloseHandle(hSnapshot); // dont forget to close the opened handle

	return pids;
}



void clearDeadPIDCache(uint32_t pid)
{
	//TODO CLEAR THE SPECIFIC PID OFF ALL CACHES
}

ProcessInfo getProcessInfo(CTH32SGetAll procinfo, ULONGLONG systemDeltaTime)
{
	std::wstring wname = NarrowToWide(procinfo.szExeFile);

	HANDLE hProcessPQLI = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, procinfo.th32ProcessID);



	double cpuUsage = 0.0;
	if (hProcessPQLI != 0)
	{
		cpuUsage = getCpuUsagePercentage(hProcessPQLI, procinfo.th32ProcessID, systemDeltaTime);

		CloseHandle(hProcessPQLI);
	}


	return {
		procinfo.th32ProcessID,
		procinfo.th32ParentProcessID,
		procinfo.cntThreads,
		procinfo.pcPriClassBase,
		procinfo.szExeFile,
		wname,
		cpuUsage,
		0.0,
		0.0,

		10,
		10,
		10,
	};
}

void fillProcessesVector()
{
	ULONGLONG systemDeltaTime = UpdateSystemCpuDelta();
	std::vector<CTH32SGetAll> list = GetAllProcessIDs();

	CurFramCache.clear();
	CurFramCache.reserve(list.size()); //if you reserve it does it in one time else each time i add if it goes above the limit it will increment wich can increment multiple times


	for (CTH32SGetAll& process : list) // using & allows me to look at the existing copy instead of remaking a new allocation and copy in memory of the whole cache since CTH32SGetAll has a string it could bhe heavy
	{
		CurFramCache.insert(process.th32ProcessID);
	}

	if (!PrevFramCache.empty())
	{
		for (uint32_t prevPID : PrevFramCache)
		{
			if (CurFramCache.find(prevPID) == CurFramCache.end())
			{
				clearDeadPIDCache(prevPID);
			}
		}
	}
	// make cache and compare what is in cache and if its in the live version (if no call clearDeadPIDCache())



	processes.clear(); // clear first else cache will just get bigger and bigger and bigger and bigger alr il stop
	processes.reserve(list.size()); // reserve first for the same reason as above
	for (CTH32SGetAll& process : list)
	{
		ProcessInfo procinfo = getProcessInfo(process, systemDeltaTime);
		processes.push_back(procinfo);
	}
	

	PrevFramCache = CurFramCache; // filling the prev PID cache list for next run with this frame's cache
}