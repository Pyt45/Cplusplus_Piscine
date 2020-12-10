#include <iostream>
#include <cctype>
#include <cstring>

void	megaphone(char **argv, int argc)
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; j < int(strlen(argv[i])); j++)
			std::cout << char(toupper(argv[i][j]));
		std::cout << ' ';
	}
	std::cout<<std::endl;
}

auto main(int argc, char **argv) -> int
{
	if (argc > 1)
		megaphone(argv, argc);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}












