#ifndef litecpp_windows_startup_h
#define litecpp_windows_startup_h

#include <string.h>

extern "C" int main(int argc, char* argv[]);

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
	return main(0, NULL);
}

#endif 