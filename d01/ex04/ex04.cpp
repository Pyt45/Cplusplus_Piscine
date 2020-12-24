#include <iostream>

int     main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string*	strPtr = &str;
	std::string&	strRef = str;

	std::cout << "By pointer   " << *strPtr << std::endl;
	std::cout << "By reference " << strRef << std::endl;
	return (0);
}