/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:05:34 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/24 11:32:56 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap( void ) : ClapTrap("default")
{
	// this->_name = ClapTrap::_name;
	// this->_hitPoints = ClapTrap::_maxHitPoints;
	// this->_energyPoints = ClapTrap::_maxEnergyPoints;
	// this->_level = ClapTrap::_level;
	_maxHitPoints = 100;
	_maxEnergyPoints = 50;
	_level = 1;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "\033[1;32mScavTrap: Hey hey check me out everyBody my name is "
	<< ClapTrap::_name << "\033[0m" << std::endl;
	srand(clock());
	return ;
}

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap(name)
{
	this->_name = name;
	std::cout << "\033[2;32mScavTrap: Yoooohooo, unce!, !unce, I think I lost the beat but unce!, my name is " 
	<< this->_name << "\033[0m" << std::endl;
	_maxHitPoints = 100;
	_maxEnergyPoints = 50;
	_level = 1;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	srand(clock());
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "\033[1;32mScavTrap: Am I dead or not, Can I open my eyes?\033[0m" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
{
	std::cout << "\033[1;32ScavTrap: Recompiling my combat code! my name is \033[0m"
	<< "\033[0;32m" << this->_name << "\033[0m" << std::endl;
	*this = src;
	return ;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & src )
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_level = src._level;
	}
	return *this;
}


void	ScavTrap::challengeNewcomer( void )
{
	std::string		challenge[5] = {
		"\033[1;31mI am a tornado of death and bullets!\033[0m",
		"\033[1;31mAww! Now I want a snow cone\033[0m",
		"\033[1;31mFreeze, in the reference of emotion!\033[0m",
		"\033[1;31mFly mini-trap! Fly!\033[0m",
		"\033[1;31mTrouncy, flouncy... founcy... those aren't words\033[0m"
	};
	int		r = rand() % 5;
	std::cout << "Challenge: " << std::endl;
	std::cout << challenge[r] << std::endl;
	return ;
}