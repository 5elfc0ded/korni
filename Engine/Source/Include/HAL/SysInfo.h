#pragma once

#include <Core/Minimal.h>

typedef struct SysInfo {
	U32 TotalRAM;
	U32 CPUCoreCount;
} SysInfo;

KN_API void GetSysInfo(struct SysInfo* p_info);
