#pragma once
#include "string"

//STRING UTILS
std::string WideToNarrow(const wchar_t* wstr);
std::wstring NarrowToWide(const std::string& str);


//VALUE UTILS
ULONGLONG FileTimeToUint64(const FILETIME& ft);


ULONGLONG CalculateSystemDeltaTime();

static ULONGLONG g_prevSystemTotalTime = 0;