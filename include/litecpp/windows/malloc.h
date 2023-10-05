#ifndef litecpp_windows_malloc_h
#define litecpp_windows_malloc_h

#include <stddef.h>
#include <assert.h>

void* malloc(size_t size)
{
	void* result = GlobalAlloc(GMEM_FIXED, size);

	return result;
}

void* calloc(size_t num, size_t size)
{
	void* result = GlobalAlloc(GMEM_FIXED, num * size);

	return result;
}

void free(void* ptr)
{
	assert(ptr != NULL);

	GlobalFree(ptr);
}

#endif