/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:50:23 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/27 17:32:07 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"



SuperTrap::SuperTrap( void ) : ClapTrap(), FragTrap(), NinjaTrap()
{
	this->_name = ClapTrap::_name;
	std::cout << "\033[1;31mSP4G-TP: SuperTrap is in a good mode to start Eating banana\033[0m" << std::endl;
	_maxHitPoints = FragTrap::_maxHitPoints;
	_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	_armorDamageReduction = FragTrap::_armorDamageReduction;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	return ;
}

SuperTrap::SuperTrap( std::string const & name ) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	this->_name = name;
	std::cout << "\033[2;31mSP4G-TP: SuperTrap is in a good mode, Let's get start the party my name is \033[0m"
	<< "\033[1;31m" << this->_name << "\033[0m" << std::endl;
	_maxHitPoints = FragTrap::_maxHitPoints;
	_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	_armorDamageReduction = FragTrap::_armorDamageReduction;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	return ;
}

SuperTrap::~SuperTrap( void )
{
	std::cout << "\033[1;32mSP4G-TP: Am I dead? Am I in heaven?\033[0m" << std::endl;
	return ;
}

SuperTrap::SuperTrap( SuperTrap const & src ) : ClapTrap(src), FragTrap(), NinjaTrap()
{
	*this = src;
	std::cout << "\033[1;32SP4G-TP: SuperTrap Recompiling combat code!\033[0m"
	<< std::endl;
	return ;
}

SuperTrap & SuperTrap::operator=( SuperTrap const & src )
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

void	SuperTrap::rangedAttack(std::string const & target) const
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target) const
{
	NinjaTrap::meleeAttack(target);
}