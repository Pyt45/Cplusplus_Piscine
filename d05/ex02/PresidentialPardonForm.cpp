/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:51:02 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/18 10:27:10 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

const int PresidentialPardonForm::_sign = 25;
const int PresidentialPardonForm::_exec = 5;

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("", PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src )
{
	static_cast<void>(src);
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & src )
{
	static_cast<void>(src);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

std::string const & PresidentialPardonForm::getTarget() const
{
	return Form::getName();
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}