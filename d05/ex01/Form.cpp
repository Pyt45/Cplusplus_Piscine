/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:54:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/02 13:31:44 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form( void ): _name("default-form"), _SignGrade(1), _ExecGrade(10)
{
	_IsSigned = false;
}

Form::Form( std::string name, int GradeSign, int GradeExec): _name(name), _SignGrade(GradeSign), _ExecGrade(GradeExec)
{
	_IsSigned = false;
	if (GradeSign < 1 || GradeExec < 1)
		throw GradeTooLowException();
	else if (GradeSign > 150 || GradeExec > 150)
		throw GradeTooHighException();
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade is too High";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade is too Low";
}

Form::Form( Form const & src ): _name(src.getName()), _SignGrade(src.getSignGrade()), _ExecGrade(src.getExecGrade())
{
	_IsSigned = src.getSigned();
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
	else
		this->_IsSigned = true;	
}


std::ostream & operator<<(std::ostream & o, Form const & form)
{
	o << form.getName() << ", form sign grade : " << form.getSignGrade() <<
	", excution grade : " << form.getExecGrade() << "\n- status : ";
	if (form.getSigned())
		o << " Signed";
	else
		o << " Unsigned";
	o << std::endl;
	return o;
}