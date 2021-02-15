/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:49:38 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/15 17:58:27 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	std::cout << "Default Constructor Called" << std::endl;
	return ;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too High";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too Low";
}

Bureaucrat::Bureaucrat( std::string name, int grade)
{
	// if (grade < 1)
	// 	throw GradeTooHighException();
	// else if (grade > 150)
	// 	throw GradeTooLowException();
	try {
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		else
		{
			_name = name;
			_grade = grade;
		}
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
	*this = src;
	return ;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & src )
{
	if (this != &src)
	{
		this->_name = src.getName();
		this->_name = src.getGrade();
	}
	return *this;
}

Bureaucrat & Bureaucrat::operator+( int const num )
{
	if ((this->_grade - num) < 1)
		throw GradeTooHighException();
	else
		this->_grade -= num;
	return *this;
}

Bureaucrat & Bureaucrat::operator-( int const num )
{
	if ((this->_grade + num) > 150)
		throw GradeTooLowException();
	else
		this->_grade += num;
	return *this;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Deconstructor Called" << std::endl;
	return ;
}

std::string const & Bureaucrat::getName() const {
	return this->_name;
}

int		Bureaucrat::getGrade() const {
	return this->_grade;
}


std::ostream & operator<<(std::ostream & o, Bureaucrat const & src)
{
	std::cout << "<" << src.getName() << ">, bureaucrat grade <"
	<< src.getGrade() << ">" << std::endl;
	return o;
}

void	Bureaucrat::signFrom( Form const & src )
{
	if (src.getSignGrade() < this->_grade && src.getSigned() == false)
		std::cout << this->_name << " signs " << src.getName() << std::endl;
	else
		std::cout << "<" << this->_name << "> cannot sign " << "<"
		<< src.getName() << ">" << " because" << " it has no enaugh grade or it's alredy signed" << std::endl;
	return ;
}