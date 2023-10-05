#ifndef litecpp_string_h
#define litecpp_string_h

#include "stddef.h"
#include <stdint.h>

size_t strlen(const char * src)
{
	size_t i = 0;

	while (src[i] != 0)
	{
		i++;
	}

	return i;
}

void* memcpy(void* dst, const void* src, size_t n)
{
	for (size_t i = 0; i < n; i++)
		((uint8_t*)dst)[i] = ((uint8_t*)src)[i];

	return dst;
}

void* memset(void* dest, int ch, size_t count)
{
	return NULL;
}

int memcmp(const void* lhs, const void* rhs, size_t count)
{
	return 0;
}

wchar_t* wcscpy(wchar_t* dest, const wchar_t* src)
{
	return NULL;
}

#endif 