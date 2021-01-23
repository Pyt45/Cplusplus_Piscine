#include <iostream>


int		main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string* pstr = &str;
	std::string& rstr = str;

	std::cout << "\033[0;32mDisplay By Pointer: " << *pstr << "\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;31mDisplay By Reference: " << rstr << "\033[0m" << std::endl;
}