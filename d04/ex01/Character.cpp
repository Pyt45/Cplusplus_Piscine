/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:19:20 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 12:33:26 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	return ;
}

Character::Character( std::string const & name )
{
	this->_name = name;
	this->_ap = 40;
	this->_wp = NULL;
	return ;
}

Character::Character( Character const & src )
{
	*this = src;
	return ;
}

Character & Character::operator=( Character const & src )
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_ap = src._ap;
		this->_wp = src._wp;
	}
	return *this;
}

Character::~Character( void )
{
	return ;
}

std::string	const & Character::getName() const
{
	return this->_name;
}

int		Character::getAP() const
{
	return this->_ap;
}

AWeapon		*Character::getWeapon() const
{
	return _wp;
}

std::ostream & operator<<(std::ostream & o, Character const & src)
{
	o << src.getName() << " has " << src.getAP() << " AP and ";
	if (src.getAP() && src.getWeapon())
		o << "wields a " << src.getWeapon()->getName() << std::endl;
	else
		o << "is unarmed" << std::endl;
	return o;
}

void	Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap >= 40)
		this->_ap = 40;
	return ;
}

void	Character::equip(AWeapon *wp)
{
	this->_wp = wp;
	return ;
}

// void	Character::attack(Enemy *em)
// {
// 	if (_ap >= _wp->getAPCost())
// 	{
// 		_ap -= _wp->getAPCost();
// 		em->takeDamage(_wp->getDamage());
// 		std::cout << _name <<" attacks "<< em->getType() <<" with a "<< _wp->getName() << std::endl;
// 		if (em->getHP() == 0)
// 			delete em;
// 	}
// 	return ;
// }

void	Character::attack(Enemy *em)
{
	if (this->_ap >= _wp->getAPCost())
	{
		this->_ap -= _wp->getAPCost();
		em->takeDamage(_wp->getDamage());
		std::cout << this->_name << " attacks " <<
		em->getType() << " with a " << _wp->getName()
		<< std::endl;
		_wp->attack();
		if (em->getHP() == 0)
			delete em;
	}
	return ;
}