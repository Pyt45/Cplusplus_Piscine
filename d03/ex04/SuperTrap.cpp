/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:50:23 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/03 12:26:41 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int		SuperTrap::_maxHitPoints = FragTrap::_maxHitPoints;
int		SuperTrap::_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
int		SuperTrap::_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
int		SuperTrap::_rangedAttackDamage = FragTrap::_rangedAttackDamage;
int		SuperTrap::_armorDamageReduction = FragTrap::_armorDamageReduction;

SuperTrap::SuperTrap( void ) : ClapTrap(), FragTrap(), NinjaTrap()
{
	this->_name = ClapTrap::_name;
	std::cout << "\033[1;31mSP4G-TP: SuperTrap is in a good mode to start Eating banana\033[0m" << std::endl;
	this->_hitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = NinjaTrap::_maxEnergyPoints;
	this->_level = 1;
	return ;
}

SuperTrap::SuperTrap( std::string const & name ) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	this->_name = name;
	std::cout << "\033[2;31mSP4G-TP: SuperTrap is in a good mode, Let's get start the party my name is \033[0m"
	<< "\033[1;31m" << this->_name << "\033[0m" << std::endl;
	this->_hitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = NinjaTrap::_maxEnergyPoints;
	this->_level = 1;
	return ;
}

SuperTrap::~SuperTrap( void )
{
	std::cout << "\033[1;32mSP4G-TP: Am I dead? Am I in heaven?\033[0m" << std::endl;
	return ;
}

SuperTrap::SuperTrap( SuperTrap const & src ) : ClapTrap(src), FragTrap(), NinjaTrap()
{
	std::cout << "\033[1;32SP4G-TP: SuperTrap Recompiling combat code!\033[0m"
	<< std::endl;
	*this = src;
	return ;
}

SuperTrap & SuperTrap::operator=( SuperTrap const & src )
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_level = src._level;
	}
	return *this;
}

void	SuperTrap::rangedAttack(std::string const & target) const
{
	std::cout << "\033[0;32mSuperTrap <" << _name << ">"
	<< " attacks <" << target << "> at range, causing <"
	<< _rangedAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	return ;
}

void	SuperTrap::meleeAttack(std::string const & target) const
{
	std::cout << "\033[0;32mSuperTrap Hyah! Heyyah! take That <" << _name << ">"
	<< " attacks <" << target << "> ,causing <"
	<< _meleeAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	return ;
}


void	SuperTrap::takeDamage(unsigned int amount)
{
	int		life;

	life = _hitPoints + _armorDamageReduction - amount;
	if (life > 0 && _hitPoints > 0)
	{
		_hitPoints = _hitPoints + _armorDamageReduction - amount;
		std::cout << "SP4G-TP: " << _name << " take damage of "
		<< amount - _armorDamageReduction << " and his life is "
		<< _hitPoints << std::endl;
	}
	else
	{
		_hitPoints = 0;
		std::cout << "SP4G-TP: Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
	}
}

void	SuperTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints >= 0 && (_hitPoints + amount) <= 100)
	{
		_hitPoints += amount;
		std::cout << "SP4G-TP " << _name << "BeRepaired with "
		<< amount << "and his life is " << _hitPoints << std::endl;
	}
	else if ((_hitPoints + amount) > 100)
	{
		std::cout << "SP4G-TP " << _name << " Can't have more than 100 HP LIFE is "
		<< _hitPoints << std::endl;
	}
	else
		std::cout << "SP4G-TP: Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
}