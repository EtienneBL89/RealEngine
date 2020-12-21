#pragma once

#ifdef PLATFORM_WINDOWS
	#if BUILD_DLL
		#define REAL __declspec(dllexport)
	#else
		#define REAL __declspec(dllimport)
	#endif
#else
	#error The Real Engine only supports Windows (for now... ?)
#endif