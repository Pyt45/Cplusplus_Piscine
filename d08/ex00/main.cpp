/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:44:20 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/24 11:47:10 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	std::vector<int> v;
	v.push_back(5);
	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);

	std::for_each(v.begin(), v.end(), [](const int & e){
		std::cout << e << std::endl;
	});
	std::cout << "============" << std::endl;
	try {
		std::cout << easyfind(v, 5) << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
