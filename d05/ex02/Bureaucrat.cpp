#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Initialzed Constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
}

const std::string& Bureaucrat::getName() const
{
	return this->_name;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & src)
{
	std::cout << "Assignment Constructor called" << std::endl;
	if (this == &src)
		return *this;
	// this->_name = src.getName();
	this->_grade = src.getGrade();
	return *this;
}


int Bureaucrat::getGrade() const
{
	return this->_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade must not be above 150");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade must not be under 1");
}

void	Bureaucrat::operator+=(int const num)
{
	if ((this->_grade - num) < 1)
	{
		std::cout << this->_grade - num << std::endl;
		throw GradeTooLowException();
	}
	else
		this->_grade -= num;
}

void	Bureaucrat::operator-=(int const num)
{
	if ((this->_grade + num) > 150)
		throw GradeTooHighException();
	else
		this->_grade += num;
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const & src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return o;
}