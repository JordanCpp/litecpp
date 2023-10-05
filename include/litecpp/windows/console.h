#ifndef litecpp_windows_console_h
#define litecpp_windows_console_h

#include <stddef.h>
#include <string.h>
#include <Windows.h>

void ConsoleWrite(const char* source)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwCount = 0;

	WriteConsole(out, source, strlen(source), &dwCount, NULL);
}

#endif