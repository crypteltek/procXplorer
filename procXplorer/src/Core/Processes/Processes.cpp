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



ProcessInfo getProcessInfo(CTH32SGetAll procinfo, ULONGLONG systemDeltaTime)
{ 
	std::wstring wname = NarrowToWide(procinfo.szExeFile);

	HANDLE hProcess = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, procinfo.th32ProcessID);

	double cpuUsage = getCpuUsagePercentage(hProcess, procinfo.th32ProcessID, systemDeltaTime);

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
	std::vector<CTH32SGetAll> pids = GetAllProcessIDs();

	for (CTH32SGetAll pid : pids)
	{
		ProcessInfo procinfo = getProcessInfo(pid, systemDeltaTime);
		processes.push_back(procinfo);
	}
}