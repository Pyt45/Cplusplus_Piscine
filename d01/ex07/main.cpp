/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:38:37 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:38:38 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	for (int i = 0; i < int(upper_file.length()); i++)
	{
		r_file += toupper(upper_file[i]);
	}
	r_file += ".replace";
	return r_file;
}

void	replace(std::string filename, std::string s1, std::string s2)
{
	std::string	w_file;
	std::string	line;
	std::size_t	found;

	w_file  = cut_file(filename);
	std::ifstream input_f(filename);

	if (!input_f)
	{
		std::cout << "\033[0;31mFile doesn\'t Exist\033[m" << std::endl;
		return ;
	}
	std::ofstream output_f(w_file);
	while (std::getline(input_f, line))
	{
		while (true)
		{
			found = line.find(s1);
			if (found != std::string::npos)
				line.replace(found, s1.length(), s2);
			else
				break ;
		}
		output_f << line << std::endl;
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