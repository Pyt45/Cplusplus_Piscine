/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:50:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/18 16:47:48 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat b("Bob", 1);
	// Form *f = new PresidentialPardonForm("Jimmy");
	// std::cout << *f << std::endl;
	// f->beSigned(b);
	// try {
	// 	f->execute(b);
	// }
	// catch(std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// delete f;

	Form *f = new ShrubberyCreationForm("Jimmy");
	std::cout << *f << std::endl;

	f->beSigned(b);
	try {
		f->execute(b);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	delete f;
	return 0;
}