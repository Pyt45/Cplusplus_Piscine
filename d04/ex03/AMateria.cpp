/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:44:02 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/10 16:05:08 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
	this->_xp = 0;
	this->_type = "default";
	return ;
}

AMateria::AMateria( std::string const & type )
{
	this->_xp = 0;
	this->_type = type;
	return ;
}

AMateria::AMateria( AMateria const & src )
{
	*this = src;
	return ;
}

AMateria & AMateria::operator=( AMateria const & src )
{
	if (this != &src)
	{
		this->_xp = src._xp;
		this->_type = src._type;
	}
	return *this;
}

AMateria::~AMateria( void )
{
	return ;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

void	AMateria::use(ICharacter & target)
{
	this->_xp += 10;
}