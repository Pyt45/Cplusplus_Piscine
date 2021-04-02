/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:50:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/02 16:39:59 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


void	apply_test(Bureaucrat & b, Form & f)
{
	b.signForm(f);
	std::cout << std::endl;
	b.executeForm(f);
	std::cout << std::endl;
}

int main()
{
    Bureaucrat	bob("Bob", 1);
    Bureaucrat	jimmy("Jimmy", 30);
	Bureaucrat	rock("rock", 43);

	ShrubberyCreationForm	shrub(rock.getName());
	PresidentialPardonForm	pardon(bob.getName());
	RobotomyRequestForm		robot(jimmy.getName());

	apply_test(bob, pardon);
	apply_test(jimmy, robot);
	apply_test(rock, shrub);

	std::cout << std::endl;

	try {
		Bureaucrat	b("jack", 150);
		RobotomyRequestForm	p("robo");

		b.executeForm(p);
		std::cout << std::endl;
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}