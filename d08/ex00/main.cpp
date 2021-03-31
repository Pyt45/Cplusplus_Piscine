/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:44:20 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/31 13:07:00 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	{
		std::vector<int> v;
		v.push_back(5);
		v.push_back(4);
		v.push_back(3);
		v.push_back(2);
		v.push_back(1);

		for (int i = 0; i < static_cast<int>(v.size()); i++)
			std::cout << v.at(i) << std::endl;
		std::cout << std::endl;
		try {
			std::cout << easyfind(v, 5) << std::endl;
			std::cout << easyfind(v, 50) << std::endl;
		}
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::list<int> l;
		srand(clock());
		for (int i = 0; i < 50; i++)
			l.push_back(rand() % 50);
		for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
			std::cout << *it << std::endl;
		try {
			std::cout << std::endl;
			std::cout << easyfind(l, 43) << std::endl;
			std::cout << easyfind(l, 430) << std::endl;
			std::cout << std::endl;
		}
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
}
