#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GAMEENGINE_API __declspec(dllexport)
	#else
		#define GAMEENGINE_API __declspec(dllimport)
	#endif // GE_BUILD_DLL

#else
	#error GameEngine only support winodows!
#endif // GE_PLATFORM_WINDOWS
