/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:54:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/18 16:55:34 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form( void ): _name("default-form"), _SignGrade(1), _ExecGrade(10)
{
	_IsSigned = false;
}

Form::Form( std::string name, int GradeSign, int GradeExec): _name(name), _SignGrade(GradeSign), _ExecGrade(GradeExec)
{
	if (GradeSign < 1 || GradeExec < 1)
		throw GradeTooLowException();
	else if (GradeSign > 150 || GradeExec > 150)
		throw GradeTooHighException();
	else
		_IsSigned = false;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade is too High";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade is too Low";
}

const char * Form::ExceptionNotSigned::what() const throw()
{
	return "Form not Signed, yet";
}

Form::Form( Form const & src ): _name(src.getName()), _SignGrade(src.getSignGrade()), _ExecGrade(src.getExecGrade())
{
	*this = src;
	return ;
}

Form & Form::operator=( Form const & src )
{
	if (this != &src)
	{
		this->_IsSigned = src.getSigned();
	}
	return *this;
}

Form::~Form( void )
{
	std::cout << "Deconstructor Called" << std::endl;
	return ;
}

std::string const & Form::getName() const
{
	return this->_name;
}

bool	Form::getSigned() const
{
	return _IsSigned;
}

int	Form::getExecGrade() const
{
	return this->_ExecGrade;
}

int	Form::getSignGrade() const
{
	return this->_SignGrade;
}

void	Form::beSigned( Bureaucrat const & b )
{
	if (b.getGrade() > this->_SignGrade)
		throw GradeTooLowException();
	else if (this->_IsSigned == false)
	{
		set_signed();
		std::cout << this->_name << " : form Signed" << std::endl;
	}
	else if (this->_IsSigned == true)
		std::cout << this->_name << " can not be Signed because is alredy Signed"
		<< std::endl;
	return ; 	
}

void	Form::set_signed()
{
	this->_IsSigned = true;
}

void	Form::execute( Bureaucrat const & executor ) const
{
	if (getSigned() == false)
		throw Form::ExceptionNotSigned();
	else if (executor.getGrade() > this->_ExecGrade)
		throw Form::GradeTooLowException();
	return ;
}

std::ostream & operator<<(std::ostream & o, Form const & src)
{
	o << src.getName() << " form is Signed with a SignGrade " << src.getSignGrade() <<
	" and an ExecGrade " << src.getExecGrade() << " - status : " << src.getSigned() << std::endl;
	return o;
}