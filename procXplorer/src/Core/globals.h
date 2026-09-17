#pragma once
#include <string>
#include <vector>
#include <windows.h>
#include <unordered_map>



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
	
	uint32_t gdi = 0; // GDI (graphical driver interface) objects (count)
	uint32_t uso = 0; // user objects (count)

	// i just learned i could do a struct in a struct

};



inline  std::vector<ProcessInfo> processes = {};


