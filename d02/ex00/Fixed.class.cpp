/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:39:00 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:39:01 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int const	Fixed::_fbits = 8;

Fixed::Fixed( void ): _fpnt(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
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
		this->_fpnt = src.getRawBits();
	}
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpnt / (1 << this->_fbits));
}

void	Fixed::setRawBits( int const raw )
{
	this->_fpnt = raw * (1 << this->_fbits);
}