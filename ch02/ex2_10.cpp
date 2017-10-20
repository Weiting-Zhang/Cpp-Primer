#include <iostream>
std::string global_str;
int global_int;
int main()
{
	int local_int;
	std::string local_str;
	std::cout << (global_str == "") << std::endl;
	std::cout << (global_int == 0) << std::endl;
	std::cout << (local_int == 0) << std::endl;
	std::cout << (local_str == "") << std::endl;
}
