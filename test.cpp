#include <windows/startup.h>
#include <vector>
#include <iostream>

void test_vector_empty()
{
	std::vector<size_t> vec;

	assert(vec.capacity() == 0);
	assert(vec.size()     == 0);
	assert(vec.data()     == NULL);

	for (size_t i = 0; i < 8; i++)
	{
		vec.push_back(i);
		assert(vec[i] == i);
		assert(vec.capacity() == 8);
		assert(vec.size() == i + 1);
	}

	vec.push_back(1);
	assert(vec.capacity() == 16);
	assert(vec.size() == 9);
}

void test_vector_sized()
{
	std::vector<size_t> vec(100);
	assert(vec.capacity() == 100);
	assert(vec.size()     == 100);

	vec.reserve(50);
	assert(vec.capacity() == 100);
	assert(vec.size()     == 100);

	vec.reserve(150);
	assert(vec.capacity() == 150);
	assert(vec.size()     == 100);

	vec.resize(40);
	assert(vec.capacity() == 150);
	assert(vec.size()     == 40);

	vec.resize(200);
	assert(vec.capacity() == 200);
	assert(vec.size()     == 200);
}

int main(int argc, char* argv[])
{
	test_vector_empty();
	test_vector_sized();

	return 0;
}