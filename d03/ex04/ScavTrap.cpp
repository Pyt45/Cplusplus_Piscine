/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:05:34 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/25 12:26:12 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->_name = ClapTrap::_name;
	ClapTrap::_maxHitPoints = 100;
	ClapTrap::_maxEnergyPoints = 50;
	ClapTrap::_level = 1;
	ClapTrap::_hitPoints = _maxHitPoints;
	ClapTrap::_energyPoints = _maxEnergyPoints;
	ClapTrap::_meleeAttackDamage = 20;
	ClapTrap::_rangedAttackDamage = 15;
	ClapTrap::_armorDamageReduction = 3;
	std::cout << "\033[1;32mScavTrap: Hey hey check me out everyBody my name is "
	<< this->_name << "\033[0m" << std::endl;
	srand(clock());
	return ;
}

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap(name)
{
	this->_name = name;
	std::cout << "\033[2;32mScavTrap: Yoooohooo, unce!, !unce, I think I lost the beat but unce!, my name is " 
	<< this->_name << "\033[0m" << std::endl;
	ClapTrap::_maxHitPoints = 100;
	ClapTrap::_maxEnergyPoints = 50;
	ClapTrap::_level = 1;
	ClapTrap::_hitPoints = _maxHitPoints;
	ClapTrap::_energyPoints = _maxEnergyPoints;
	ClapTrap::_meleeAttackDamage = 20;
	ClapTrap::_rangedAttackDamage = 15;
	ClapTrap::_armorDamageReduction = 3;
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


void	ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "\033[0;32mScavTrap: <" << this->_name << ">"
	<< " attacks <" << target << "> at range, causing <"
	<< _rangedAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	return ;
}

void	ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "\033[0;32mScavTrap: Hyah! Heyyah! take That <" << this->_name << ">"
	<< " attacks <" << target << " ,causing <"
	<< _meleeAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int		life;

	life = this->_hitPoints + this->_armorDamageReduction - amount;
	if (life > 0 && this->_hitPoints > 0)
	{
		this->_hitPoints = this->_hitPoints + this->_armorDamageReduction - amount;
		std::cout << "ScavTrap: " << this->_name << " take damage of "
		<< amount - this->_armorDamageReduction << " and his life is "
		<< this->_hitPoints << std::endl;
	}
	else
	{
		this->_hitPoints = 0;
		std::cout << "ScavTrap: Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints >= 0 && (this->_hitPoints + amount) <= 100)
	{
		this->_hitPoints += amount;
		std::cout << "ScavTrap: " << this->_name << " BeRepaired with "
		<< amount << "and his life is " << this->_hitPoints << std::endl;
	}
	else if ((this->_hitPoints + amount) > 100)
	{
		std::cout << "ScavTrap: status " << this->_name << " Can't have more than 100 HP LIFE is "
		<< this->_hitPoints << std::endl;
	}
	else
		std::cout << "ScavTrap: Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
}
