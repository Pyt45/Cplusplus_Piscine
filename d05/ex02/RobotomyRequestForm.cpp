/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:51:10 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/02 16:37:43 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm( void ): Form("", 72, 45, "")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target): Form("Robotomy Request", 72, 45, target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : Form(src)
{
	*this = src;
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & src )
{
	if (this != &src)
		Form::operator=(src);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

std::string const & RobotomyRequestForm::getTarget() const
{
	return Form::getName();
}

void	RobotomyRequestForm::action() const
{
	srand(clock());

	if (rand() % 1000 + 1 % 2)
		std::cout << getTarget() << " has been robotomized successfully 50\% of the time" << std::endl;
	else
		std::cout << getTarget() << " can not be robotomized" << std::endl;
}