#ifndef litecpp_stdlib_h
#define litecpp_stdlib_h

#include "stddef.h"
#include <ctype.h>

#include "windows/malloc.h"

int atoi(const char* s)
{
	int n = 0, neg = 0;

	while (isspace(*s)) s++;

	switch (*s) 
	{
	case '-': neg = 1;
	case '+': s++;
	}

	while (isdigit(*s))
		n = 10 * n - (*s++ - '0');

	return neg ? n : -n;
}

#endif 