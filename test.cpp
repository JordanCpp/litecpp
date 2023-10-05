#include <windows/startup.h>
#include <string>
#include <iostream>

int main()
{
	std::string s("Hello world!");

	std::cout << s.c_str() << std::endl;

	return 0;
}