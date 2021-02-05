/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:35:08 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:35:12 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc > 1)
		megaphone(argv, argc);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}