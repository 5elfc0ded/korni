#include <HAL/SysInfo.h>

#include <windows.h>

void GetSysInfo(struct SysInfo* p_info) {
	SYSTEM_INFO info;
	GetSystemInfo(&info);
	p_info->CPUCoreCount = info.dwNumberOfProcessors;
	MEMORYSTATUSEX memstat;
	GlobalMemoryStatusEx(&memstat);
	p_info->TotalRAM = (U32)(memstat.ullTotalPhys);
}
