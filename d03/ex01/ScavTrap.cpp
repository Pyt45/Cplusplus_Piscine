/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:05:34 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/28 19:32:34 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	this->_name = "Default";
	_maxHitPoints = 100;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	std::cout << "\033[1;32mHey hey check me out everyBody my name is "
	<< this->_name << "\033[0m" << std::endl;
	srand(clock());
	return ;
}

ScavTrap::ScavTrap( std::string const & name )
{
	this->_name = name;
	std::cout << "\033[2;32mYoooohooo, unce!, !unce, I think I lost the beat but unce!, my name is " 
	<< this->_name << "\033[0m" << std::endl;
	_maxHitPoints = 100;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	srand(clock());
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "\033[1;32mI'm I dead or not, Can I open my eyes?\033[0m" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	*this = src;
	std::cout << "\033[1;32mRecompiling my combat code! my name is \033[0m"
	<< "\033[0;32m" << this->_name << "\033[0m" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & src )
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

void	ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "\033[0;32mSC4V-TP <" << this->_name << ">"
	<< " is attacking the <" << target << "> with a big gun at range, causing <"
	<< _rangedAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	return ;
}

void	ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "\033[0;32mSC4V-TP I will kill you take That you bloody elf <" << this->_name << ">"
	<< " is attacking <" << target << ">" << " ,causing <"
	<< _meleeAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	long int life = 0;
	if (static_cast<long int>(this->_hitPoints) + static_cast<long int>(this->_armorDamageReduction) - static_cast<long int>(amount) < 0)
		life = 0;
	else
		life = static_cast<long int>(this->_hitPoints) + static_cast<long int>(this->_armorDamageReduction) - static_cast<long int>(amount);
	if (life > 0 && this->_hitPoints > 0)
	{
		this->_hitPoints = this->_hitPoints + this->_armorDamageReduction - amount;
		std::cout << this->_name << " take damage of "
		<< amount - this->_armorDamageReduction << " and his life is "
		<< this->_hitPoints << std::endl;
	}
	else
	{
		this->_hitPoints = 0;
		std::cout << "Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints >= 0 && (this->_hitPoints + amount) <= this->_maxHitPoints)
	{
		this->_hitPoints += amount;
		std::cout << "SC4V-TP " << this->_name << " BeRepaired with "
		<< amount << " and the life is " << this->_hitPoints << std::endl;
	}
	else if ((this->_hitPoints + amount) > this->_maxHitPoints)
	{
		this->_hitPoints = this->_maxHitPoints;
		std::cout << "Status: SC4V-TP " << this->_name << " Can't have more than 100 HP LIFE is "
		<< this->_hitPoints << std::endl;
	}
	else
		std::cout << "SC4V-TP Hehehehe, MWAA HA HA HA! you are dead!"
		<< " the life is 0" << std::endl;
}

unsigned int		ScavTrap::getPoints( void ) const
{
	return this->_hitPoints;	
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
	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		int		r = rand() % 5;
		std::cout << "Challenge: " << std::endl;
		std::cout << challenge[r] << std::endl;
	}
	else
		std::cout << "Oh no I'm out of energy" << std::endl;
	return ;
}