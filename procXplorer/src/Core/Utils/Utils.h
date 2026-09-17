#pragma once
#include "string"


std::string WideToNarrow(const wchar_t* wstr);
std::wstring NarrowToWide(const std::string& str);