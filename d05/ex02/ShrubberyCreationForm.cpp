/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:51:16 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/18 10:43:49 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

int const ShrubberyCreationForm::_sign = 145;
int const ShrubberyCreationForm::_exec = 137;

ShrubberyCreationForm::ShrubberyCreationForm( void ): Form("", _sign, _exec)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, _exec, _sign)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src )
{
	static_cast<void>(src);
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src )
{
	static_cast<void>(src);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

std::string const & ShrubberyCreationForm::getType() const
{
	return Form::getName();
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	o_file;
	std::string		out_file = getType() + "_shrubbery";

	o_file.open(out_file, std::ios::out);
	if (o_file.bad())
		std::cout << "can not create the file: " << out_file << " for un beleievebel reason" << std::endl;
	
	return ;
}