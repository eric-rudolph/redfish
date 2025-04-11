#pragma once

#ifdef RF_PLATFORM_WINDOWS
	#ifdef RF_BUILD_DLL
		#define REDFISH_API __declspec(dllexport)
	#else
		#define REDFISH_API __declspec(dllimport)
	#endif
#else
	#error Redfish only supports Windows!
#endif