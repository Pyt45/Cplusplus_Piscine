/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:50:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/01 23:18:16 by ayoub            ###   ########.fr       */
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
    bob.signForm(*roboto);
    bob.executeForm(*roboto);
    max.signForm(*roboto);
    max.executeForm(*roboto);
    delete roboto;

    roboto = NULL;
	roboto = someRandomIntern.makeForm("invalid form name", "Max");
    delete roboto;
	return 0;
}