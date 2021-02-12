/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:50:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/12 12:57:15 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b = Bureaucrat("Bob", 1);
	std::cout << b;
	b = b - 40;
	std::cout << b;
	
	while (1)
	{
		try {
			std::cout << "Minus -50\n";
			b = b - 50;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
			break ;
		}
	}
	Bureaucrat a = Bureaucrat("Jimmy", 100);

	std::cout << a << std::endl;
	a = a + 4;
	std::cout << a << std::endl;
	while (1)
	{
		try {
			std::cout << "Plus +50\n";
			a = a + 50;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
			break ;
		}
	}
	std::cout << a << std::endl;
	return 0;
}