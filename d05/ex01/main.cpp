/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:50:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/15 18:03:20 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// Bureaucrat b = Bureaucrat("Bob", 1);
	// std::cout << b;
	// b = b - 40;
	// std::cout << b;
	
	// while (1)
	// {
	// 	try {
	// 		std::cout << "Minus -50\n";
	// 		b = b - 50;
	// 	}
	// 	catch(std::exception& e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 		break ;
	// 	}
	// }
	// Bureaucrat a = Bureaucrat("Jimmy", 100);

	// std::cout << a << std::endl;
	// a = a + 4;
	// std::cout << a << std::endl;
	// while (1)
	// {
	// 	try {
	// 		std::cout << "Plus +50\n";
	// 		a = a + 50;
	// 	}
	// 	catch(std::exception& e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 		break ;
	// 	}
	// }
	// std::cout << a << std::endl;

	Bureaucrat b("Rock", 12);
	Form v("Jack", 1, 1);

	b.signFrom(v);
	try {
		v.beSigned(b);	
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	Bureaucrat b1("Bob", 1);
	Form v1("Jimmy", 12, 1);

	v1.set_signed();
	b1.signFrom(v1);
	b1 = b1 - 12;
	std::cout << b1 << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try {
		Form f2("locky", 151, -8);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}