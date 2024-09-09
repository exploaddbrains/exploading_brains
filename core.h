#pragma once


#ifdef EB_PLATFORM_WINDOWS
	#ifdef EB_BUILD_DLL
		#define EXPLOADINGBRAINS_API _declspec(dllexport)

	#else
		#define EXPLOADINGBRAINS_API _declspec(dllimport)
	#endif // DEBUG
#else
	#error EB only supports Windows!
#endif // EB_PLATFORM_WINDOWS
