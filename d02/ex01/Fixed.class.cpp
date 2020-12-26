#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(Fixed const & fxd)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fpnt = fxd.getRawBits();
	return *this;
}



Fixed::Fixed(int const & ipnt)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(ipnt);
}

Fixed::Fixed(float const & fpnt)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(fpnt / (1 << this->_fbits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & fxd)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fxd;
	return ;
}

int		Fixed::getRawBits(void) const
{
	return this->_fpnt;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fpnt = raw;
}

std::ostream& operator<<(std::ostream& o, Fixed const & fxd)
{
	o << fxd.toFloat();
	return o;
}

float		Fixed::toFloat(void) const
{
	return roundf(this->getRawBits());
}

int			Fixed::toInt(void) const
{
	return this->getRawBits();
}