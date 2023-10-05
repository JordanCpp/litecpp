#ifndef litecpp_windows_assert_h
#define litecpp_windows_assert_h

#include <Windows.h>
#include <stddef.h>

void assert(bool condition, const char* message, const char * file, size_t line)
{
	if (!condition)
	{
		MessageBox(0, message, "", MB_OK);
	}
}

#endif 