/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:51:02 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/02 16:48:02 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm( void ) : Form("", 25, 5, "")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5, target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : Form(src)
{
	*this = src;
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & src )
{
	if (this != &src)
		Form::operator=(src);
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

void	PresidentialPardonForm::action() const
{
	std::string s1 = "hi";
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}