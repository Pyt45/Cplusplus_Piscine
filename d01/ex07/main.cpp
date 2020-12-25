#include <iostream>
#include <sstream>
#include <string>
#include <fstream>


std::string		filename_toupper(std::string filename)
{
	std::string			s1 = "";
	std::string			outfile;
	int					i;
	int					index;

	i = -1;
	index = filename.find_first_of(".");
	while (++i < filename.size())
		s1 += toupper(filename[i]);
	outfile = (index > -1) ? s1.erase(index, filename.size()) : s1;
	return outfile;
}

void	replace_func(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	ifile(filename);
	std::string		replace_file = filename_toupper(filename) + ".replace";
	std::ofstream	ofile(replace_file);
	std::string		sread;
	size_t			pos;

	if (!ifile)
	{
		std::cout << "File does not Exist" << std::endl;
		return ;
	}
	while (getline(ifile, sread))
	{
		while (true)
		{
			pos = sread.find(s1);
			if (pos != std::string::npos)
				sread.replace(pos, s1.length(), s2);
			else
				break ;
		}
		ofile << sread << std::endl;
	}
	ofile.close();
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Need 4 Arguments [filename] [s1] [s2]" << std::endl;
	else if (argc == 4)
		replace_func(argv[1], argv[2], argv[3]);
	return (0);
}