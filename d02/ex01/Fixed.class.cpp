/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:39:15 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:39:16 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int const Fixed::_fbits = 8;

Fixed::Fixed( void ): _fpnt(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const & fpnt )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpnt = fpnt * (1 << this->_fbits);
	return ;
}

Fixed::Fixed( float const & fpnt )
{
	std::cout << "Float constructor called" << std::endl;
	// do float
	this->_fpnt = roundf((float)fpnt * (float)(1 << this->_fbits));
	return ;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed & Fixed::operator=( Fixed const & src )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
	{
		this->_fpnt = src._fpnt;
	}
	return *this;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}


int		Fixed::toInt( void ) const {
	return this->_fpnt / (1 << this->_fbits);
}

float	Fixed::toFloat( void ) const{
	return (float)this->_fpnt / (float)(1 << this->_fbits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return o;
}