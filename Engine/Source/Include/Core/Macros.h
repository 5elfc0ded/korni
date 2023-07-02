#pragma once

#ifdef _WIN32
#	define KN_WINDOWS 1
#endif

#if defined(_DEBUG) || !defined(NDEBUG)
#	define KN_DEBUG_BUILD 1
#endif

#ifdef _DLL 
#	define KN_API __declspec(dllexport)
#else
#	define KN_API __declspec(dllimport)
#endif

#define _KN_DECLARE_TYPE_NAMED(original_type, derived_type) typedef original_type derived_type;
#define _KN_DECLARE_ENUM_NAMED(enum_name, first_arg, ...) typedef enum { first_arg, __VA_ARGS__ } enum_name;
