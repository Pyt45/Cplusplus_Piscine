#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


std::string cut_file(std::string filename)
{
	std::string upper_file = "";
	std::string r_file = "";
	int			index = 0;

	index = filename.find(".");
	upper_file = filename.substr(0, index);
	for (int i = 0; i < upper_file.length(); i++)
	{
		r_file += toupper(upper_file[i]);
	}
	r_file += ".replace";
	return r_file;
}

void	replace(char *filename, char *s1, char *s2)
{
	std::string	r_file = filename;
	std::string	w_file;
	std::string	line;

	w_file  = cut_file(r_file);
	std::ofstream output_f(w_file);
	std::ifstream input_f(r_file);

	while (std::getline(input_f, line))
	{
		std::cout << line << std::endl;
	}
}

int		main(int argc, char **argv)
{
	if (argc !=4 )
		std::cout << "\033[1;31m Arguments [filename] [s1] [s2] required\033[0m"
		<< std::endl;
	else
		replace(argv[1], argv[2], argv[3]);
	return 0;
}