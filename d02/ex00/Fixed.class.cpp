#include "Fixed.class.hpp"

Fixed::Fixed(void): _fpnt(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & fxd)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fxd;
	return ;
}

Fixed& Fixed::operator=(Fixed const & fxd)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fpnt = fxd.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fpnt / (1 << this->_fbits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "settRawBits member function called" << std::endl;
	this->_fpnt = raw * (1 << this->_fbits);
}