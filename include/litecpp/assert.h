#ifndef litecpp_assert_h
#define litecpp_assert_h

#include "windows/assert.h"

#define assert(x) assert(x, #x, __FILE__, __LINE__)

#endif