/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:12:07 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/29 16:08:37 by aaqlzim          ###   ########.fr       */
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
	std::cout<< "⬆ ClapTrap " << "\033[1;31m" << _name << "\033[0m" << " is dead" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const & name )
{
	this->_name = name;
	std::cout << "⬇ ClapTrap " << _name <<  " is born and Ready" << std::endl;
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

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "\033[0;32mClapTrap <" << this->_name << ">"
	<< " attacks <" << target << "> at range, causing <"
	<< this->_rangedAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	if (this->_energyPoints + this->_rangedAttackDamage < this->_maxEnergyPoints)
	{
		this->_energyPoints += this->_rangedAttackDamage;
	}
	else {
		// Reset energyPonint ot maxEnergy
		this->_energyPoints = this->_maxEnergyPoints;
	}
	return ;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "\033[0;32mClapTrap Hyah! Heyyah! take That <" << this->_name << ">"
	<< " attacks <" << target << ">" << " ,causing <"
	<< this->_meleeAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	if (this->_energyPoints + this->_meleeAttackDamage < this->_maxEnergyPoints)
	{
		this->_energyPoints += this->_meleeAttackDamage;
		
	}
	else {
		// Reset energyPonint ot maxEnergy
		this->_energyPoints = this->_maxEnergyPoints;
	}
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
		this->_hitPoints = this->_hitPoints + this->_armorDamageReduction - amount;
		std::cout << this->_name << " take damage of "
		<< amount - this->_armorDamageReduction << " and his life is "
		<< this->_hitPoints << std::endl;
	}
	else
	{
		this->_hitPoints = this->_maxHitPoints;
		std::cout << "Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
		return ;
	}
	if (this->_energyPoints < amount)
	{
		std::cout << "You has not enough energy to be repaired!" << std::endl;
		return ;
	}
	if ((this->_hitPoints + amount) < this->_maxHitPoints)
	{
		this->_hitPoints += amount;
		this->_energyPoints -= amount;
		std::cout << "CP4G-TP " << this->_name << " BeRepaired with "
		<< amount << " and his life is " << this->_hitPoints << std::endl;
	}
	else
	{
		this->_hitPoints = this->_maxHitPoints;
		std::cout << "CP4G-TP " << this->_name << " Can't have more than " << this->_maxHitPoints << " HP LIFE is "
		<< this->_hitPoints << std::endl;
	}
}

std::string ClapTrap::getName(void) const
{
	return this->_name;
}

unsigned int ClapTrap::getEnergy( void ) const {
	return this->_energyPoints;
}

unsigned int ClapTrap::getPoints( void ) const {
	return this->_hitPoints;
}