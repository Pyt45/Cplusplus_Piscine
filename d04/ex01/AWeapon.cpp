/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:53:45 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 12:07:16 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( void )
{
	return ;
}

AWeapon::AWeapon( std::string const & name, int apcost, int damage)
{
	_name = name;
	_apcost = apcost;
	_damage = damage;
	return ;
}

AWeapon::AWeapon( AWeapon const & src )
{
	*this = src;
	return ;
}

AWeapon & AWeapon::operator=( AWeapon const & src )
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_apcost = src._apcost;
		this->_damage = src._damage;
	}
	return *this;
}

AWeapon::~AWeapon( void )
{
	return ;
}

std::string const & AWeapon::getName() const
{
	return this->_name;
}

int		AWeapon::getAPCost() const
{
	return this->_apcost;
}

int		AWeapon::getDamage() const
{
	return this->_damage;
}