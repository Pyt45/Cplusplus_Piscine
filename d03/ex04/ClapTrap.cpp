/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:12:07 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/27 17:31:17 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	_name = "Clap";
	std::cout << "ClapTrap " << "\033[1;31m" << _name << "\033[0m" <<  " Called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout<< "ClapTrap " << "\033[1;31m" << _name << "\033[0m" << " is dead" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const & name )
{
	this->_name = name;
	std::cout << "ClapTrap " << _name <<  " is born and Ready" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "Recompiling my combat code!" << std::endl;
	*this = src;
	return;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & src )
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_maxEnergyPoints = src._maxEnergyPoints;
		this->_maxHitPoints = src._maxHitPoints;
		this->_armorDamageReduction = src._armorDamageReduction;
		this->_meleeAttackDamage = src._meleeAttackDamage;
		this->_rangedAttackDamage = src._rangedAttackDamage;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_level = src._level;
	}
	return *this;
}

void	ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << "\033[0;32mClapTrap <" << _name << ">"
	<< " attacks <" << target << "> at range, causing <"
	<< _rangedAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	return ;
}

void	ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << "\033[0;32mClapTrap Hyah! Heyyah! take That <" << _name << ">"
	<< " attacks <" << target << ">" << " ,causing <"
	<< _meleeAttackDamage << "> points of damage!\033[0m"
	<< std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	long int life = 0;
	if (static_cast<long int>(this->_hitPoints) + static_cast<long int>(this->_armorDamageReduction) - static_cast<long int>(amount) < 0)
		life = 0;
	else
		life = static_cast<long int>(this->_hitPoints) + static_cast<long int>(this->_armorDamageReduction) - static_cast<long int>(amount);
	if (life > 0 && this->_hitPoints > 0)
	{
		_hitPoints = _hitPoints + _armorDamageReduction - amount;
		std::cout << _name << " take damage of "
		<< amount - _armorDamageReduction << " and his life is "
		<< _hitPoints << std::endl;
	}
	else
	{
		this->_hitPoints = 0;
		std::cout << "Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints >= 0 && (_hitPoints + amount) <= 100)
	{
		_hitPoints += amount;
		std::cout << "FR4G-TP " << _name << " BeRepaired with "
		<< amount << " and his life is " << _hitPoints << std::endl;
	}
	else if ((_hitPoints + amount) > 100)
	{
		this->_hitPoints = 100;
		std::cout << "FR4G-TP " << _name << " Can't have more than 100 HP LIFE is "
		<< _hitPoints << std::endl;
	}
	else
		std::cout << "Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return this->_name;
}