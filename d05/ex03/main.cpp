/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:50:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/02 16:43:57 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Intern 	someRandomIntern;
	Bureaucrat bob("Bob", 150);
	Bureaucrat max("Max", 20);
	Form 	*roboto = NULL;

	roboto = someRandomIntern.makeForm("robotomy request", "Bob");
    std::cout << roboto->getName() << std::endl;
    std::cout << std::endl;
    bob.signForm(*roboto);
    std::cout << std::endl;
    bob.executeForm(*roboto);
    std::cout << std::endl;
    max.signForm(*roboto);
    std::cout << std::endl;
    max.executeForm(*roboto);
    std::cout << std::endl;
    delete roboto;
    std::cout << std::endl;
    Form *invalid = NULL;
	invalid = someRandomIntern.makeForm("invalid form name", "Max");
    std::cout << std::endl;
    delete invalid;
	return 0;
}