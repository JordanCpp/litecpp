#ifndef litecpp_windows_startup_h
#define litecpp_windows_startup_h

#include "string.h"
#include <Windows.h>

extern "C" int main();

extern "C" void _RTC_InitBase();
extern "C" void _RTC_Shutdown();
extern "C" int mainCRTStartup();

void _RTC_InitBase()
{
}

void _RTC_Shutdown()
{
}

int mainCRTStartup()
{
	LPTSTR commandLine = GetCommandLine();

	return main();
}

#endif 