/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:54:18 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/19 16:32:17 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

std::string Intern::_names[3] = {
	"robotomy request",
	"presidential pardon",
	"shrubbery creation"
};

Intern::Intern( void )
{
	this->_function[0] = &Intern::_PresidentialPardonForm;
	this->_function[1] = &Intern::_RobotomyRequestForm;
	this->_function[2] = &Intern::_ShrubberyCreationForm;
	return ;
}

Intern::Intern( Intern const & src )
{
	*this = src;
	return ;
}

Intern & Intern::operator=( Intern const & src )
{
	static_cast<void>(src);
	return *this;
}

Intern::~Intern( void )
{
	return ;
}

Form * Intern::_PresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form * Intern::_RobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form * Intern::_ShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form * Intern::_searchForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (this->_names[i] == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return (this->*_function[i])(target);
		}
	}
	std::cout << "Form not found :(" << std::endl;
	return NULL;
}

Form * Intern::makeForm(std::string name, std::string target)
{
	return Intern::_searchForm(name, target);
}