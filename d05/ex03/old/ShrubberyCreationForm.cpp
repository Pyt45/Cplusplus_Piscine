/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:51:16 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/18 17:14:10 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

int const ShrubberyCreationForm::_sign = 145;
int const ShrubberyCreationForm::_exec = 137;

ShrubberyCreationForm::ShrubberyCreationForm( void ): Form("", _sign, _exec)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, _sign, _exec)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src )
{
	*this = src;
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
	Form::execute(executor);
	std::ofstream	o_file;
	std::string		out_file = getType() + "_shrubbery";

	o_file.open(out_file, std::ios::out | std::ios::trunc);
	if (o_file.bad())
		std::cout << "can not create the file: " << out_file << " for unknown reason" << std::endl;
	for (int i = 1; i <= 10; ++i)
	{
		for (int j = 1; j <= 10 - i; ++j)
			o_file << " ";
		for (int k = 1; k <= 2 * i - 1; ++k)
				o_file << "0";
		o_file << std::endl;
	}
	return ;
}