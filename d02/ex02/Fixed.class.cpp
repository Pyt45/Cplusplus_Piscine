/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:39:27 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:39:28 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int const Fixed::_fbits = 8;

Fixed::Fixed( void ): _fpnt(0)
{
	return ;
}

Fixed::Fixed( float const & fpnt )
{
	this->_fpnt = roundf((float)fpnt * (float)(1 << this->_fbits));
}

Fixed::Fixed( int const & fpnt )
{
	this->_fpnt = fpnt * (1 << this->_fbits);
}

Fixed::Fixed( Fixed const & src )
{
	*this = src;
	return ;
}

Fixed::~Fixed( void ){ return ; }

float		Fixed::toFloat( void ) const
{
	return (float)this->_fpnt / (float)(1 << this->_fbits);;
}

int			Fixed::toInt( void ) const
{
	return this->_fpnt / (1 << this->_fpnt);
}

Fixed & Fixed::operator=( Fixed const & src )
{
	if (this != &src)
		this->_fpnt = src._fpnt;
	return *this;
}

Fixed & Fixed::operator+( Fixed const & src )
{
	this->_fpnt += (src._fpnt + 1);
	return *this;
}

//Pre-increment Operator
Fixed	Fixed::operator++()
{
	this->_fpnt++;
	return *this;
}
//Post-increment Operator
Fixed Fixed::operator++(int)
{
	Fixed const old(*this);

	++(*this);
	// Fixed old;
	// old._fpnt = ++_fpnt;
	// ++(*this);
	return old;
}

//Pre-decrement Operator
Fixed	Fixed::operator--()
{
	this->_fpnt--;
	return *this;
}
//Post-decrement Operator
Fixed Fixed::operator--(int)
{
	Fixed const old(*this);
	--(*this);
	return old;
}

Fixed & Fixed::operator*( Fixed const & src )
{
	this->_fpnt *= src.toFloat();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return o;
}

bool	Fixed::operator>( Fixed const & src )
{
	if (this->_fpnt > src._fpnt)
		return true;
	return false;
}

bool	Fixed::operator<( Fixed const & src )
{
	if (this->_fpnt < src._fpnt)
		return true;
	return false;
}

bool	Fixed::operator>=( Fixed const & src )
{
	if (this->_fpnt >= src._fpnt)
		return true;
	return false;
}

bool	Fixed::operator<=( Fixed const & src )
{
	if (this->_fpnt <= src._fpnt)
		return true;
	return false;
}

bool	Fixed::operator!=( Fixed const & src )
{
	if (this->_fpnt != src._fpnt)
		return true;
	return false;
}

bool	Fixed::operator==( Fixed const & src )
{
	if (this->_fpnt == src._fpnt)
		return true;
	return false;
}

Fixed & Fixed::max(Fixed & f1, Fixed & f2)
{
	if (f1._fpnt >= f2._fpnt)
		return f1;
	return f2;
}

Fixed & Fixed::operator-( Fixed const & src )
{
	this->_fpnt -= src._fpnt;
	return *this;
}

Fixed & Fixed::operator/( Fixed const & src )
{
	if (src._fpnt != 0)
		this->_fpnt /= src._fpnt;
	return *this;
}

Fixed & Fixed::min(Fixed & f1, Fixed & f2)
{
	if (f1._fpnt <= f2._fpnt)
		return f1;
	return f2;
}

Fixed const &Fixed::max(Fixed const & f1, Fixed const & f2)
{
	if (f1._fpnt >= f2._fpnt)
		return f1;
	return f2;
}

Fixed const & Fixed::min(Fixed const & f1, Fixed const & f2)
{
	if (f1._fpnt <= f2._fpnt)
		return f1;
	return f2;
}