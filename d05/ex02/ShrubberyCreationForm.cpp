/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:51:16 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/02 16:37:52 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm( void ): Form("", 145, 137, "")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery Creation", 145, 137, target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) : Form(src)
{
	*this = src;
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src )
{
	if (this != &src)
		Form::operator=(src);
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

void	ShrubberyCreationForm::action() const
{
	std::ofstream	o_file;
	std::string		out_file = getType() + "_shrubbery";

	o_file.open(out_file, std::ios::out | std::ios::trunc);
	if (o_file.bad())
		std::cout << "can not create the file: " << out_file << " for unknown reason" << std::endl;
	o_file << std::endl;
	o_file << "              ,@@@@@@@," << std::endl;
	o_file << "      ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	o_file << "   ,&\\%\\%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	o_file << "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	o_file << "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	o_file << "  %&&%/ %&\\%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	o_file << "  `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	o_file << "      |o|        | |         | |" << std::endl;
	o_file << "      |.|        | |         | |" << std::endl;
	o_file << "___ \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	o_file << "---   -------- --------  --------  -----" << std::endl;
	o_file << "-  -----    ------ ----  ----- ------" << std::endl;
	o_file.close();
	return ;
}