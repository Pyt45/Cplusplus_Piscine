/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:50:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/01 20:17:40 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b = Bureaucrat("Bob", 1);
	std::cout << b;
	try {
		b.incrementGrade();
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n==========================\n";
	Bureaucrat b1 = Bureaucrat("jim", 150);
	std::cout << b1;
	try {
		b1.decrementGrade();
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n==========================\n";
	Bureaucrat b2 = Bureaucrat("rock", 40);
	std::cout << b2;
	try {
		b2.incrementGrade();
		std::cout << b2;
		b2.incrementGrade();
		b2.incrementGrade();
		std::cout << b2;
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n==========================\n";
	try {
		Bureaucrat b3 = Bureaucrat("jimmy", -123);
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n==========================\n";
	try {
		Bureaucrat b4 = Bureaucrat("jack", 190);
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n==========================\n";
	return 0;
}