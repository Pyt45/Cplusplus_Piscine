/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:51:10 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/18 10:35:33 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int const RobotomyRequestForm::_sign = 72;
int const RobotomyRequestForm::_exec = 45;

RobotomyRequestForm::RobotomyRequestForm( void ): Form("", _sign, _exec)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target): Form(target, _sign, _exec)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src )
{
	static_cast<void>(src);
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & src )
{
	static_cast<void>(src);
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

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << getTarget() << "has been robotomized successfully 50\% of the time";
}