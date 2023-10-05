#ifndef litecpp_ctype_h
#define litecpp_ctype_h

#include "stddef.h"

bool isspace(char symbol)
{
	return symbol == ' ';
}

bool isdigit(char symbol)
{
	return symbol >= '0' && symbol <= '9';
}

#endif 