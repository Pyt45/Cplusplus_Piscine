/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:49:38 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/01 21:15:08 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("defaule"), _grade(150)
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

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src._name)
{
	*this = src;
	return ;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & src )
{
	if (this != &src)
		this->_grade = src.getGrade();
	return *this;
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	else
		--this->_grade;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	else
		++this->_grade;
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
	std::cout << src.getName() << ", bureaucrat grade "
	<< src.getGrade() << std::endl;
	return o;
}

void	Bureaucrat::signForm(Form & form)
{
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	} catch(std::exception & e) {
		std::cout << this->getName() << " cannot sign " << form.getName() << " because "
		<< e.what() << std::endl;
	}
}