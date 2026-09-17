#pragma once
#include <string>
#include <vector>


struct ProcessInfo
{
	uint32_t pid = 0; // process id
	uint32_t ppid = 0; // parent process id

	int tc = 0; // thread count
	int bt = 0; // base thread priority for threads spawned by this process 

	std::string name = ""; // .exe file name
	std::wstring wname = L""; // .exe file name but wide string

	double cpu = 0.0; //cpu usage in %
	double ram = 0.0; //ram usage in %
	double gpu = 0.0; //gpu usage in %

	uint32_t hdc = 0; // handle count
	

};



inline  std::vector<ProcessInfo> processes = {};


