#pragma once

#ifdef LZ_PLATFORM_WINDOWS
	#ifdef LZ_BUILD_DLL
		#define LEZAX_API __declspec(dllexport)
	#else
		#define LEZAX_API __declspec(dllimport)
	#endif // LZ_BUILD_DLL
#else
	#error Lezax only spports Windows!
#endif // LZ_PLATFORM_WINDOWS