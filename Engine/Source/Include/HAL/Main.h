#pragma once

#include <Core/Minimal.h>

U32 GuardedMain(CHAR_T** pp_args, U32 args_count);

#ifdef KN_WINDOWS
#include <Windows.h>
#define _KN_WINDOWS_ENTRY_POINT \
	int WINAPI WinMain (		\
_In_ HINSTANCE hInstance,		\
_In_opt_ HINSTANCE hPrevInstance,\
_In_ LPSTR lpCmdLine,			\
_In_ int nShowCmd				\
) {								\
	return GuardedMain(NULL, 0);\
}								
#endif

#define KN_POST_GUARDED_MAIN \
	_KN_WINDOWS_ENTRY_POINT \
	
