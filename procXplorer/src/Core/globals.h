#pragma once
#include <string>
#include <vector>




struct ProcessInfo
{
	uint32_t pid = 0;
	std::string name = "";
};



inline std::vector<ProcessInfo> processes = {};


