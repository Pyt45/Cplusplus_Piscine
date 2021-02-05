/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 11:43:45 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/01 10:09:36 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		FragTrap::_maxHitPoints = 100;
int		FragTrap::_maxEnergyPoints = 100;
int		FragTrap::_meleeAttackDamage = 30;
int		FragTrap::_rangedAttackDamage = 20;
int		FragTrap::_armorDamageReduction = 5;


FragTrap::FragTrap( void )
{
	this->_name = "Default";
	std::cout << "\033[1;31mHeheheeee Boooaa CLAPTRAP THE FRAGTRAP, MY NAME IS \033[0m" << "\033[0;32m"
	<< _name << "\033[0m" << std::endl;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	srand(clock());
	return ;
}
FragTrap::~FragTrap( void )
{
	std::cout << "\033[1;32mIs it dead? Can, can I open my eyes now?\033[0m" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string const & name )
{
	this->_name = name;
	std::cout << "\033[1;32mHey Everybody! Let's get this party started my name is \033[0m"
	<< "\033[0;32m" << this->_name << "\033[0m" << std::endl;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	srand(clock());
	return ;
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "\033[1;32Recompiling my combat code! This time i will be awesome, I promise and my name is \033[0m"
	<< "\033[0;32m" << this->_name << "\033[0m" << std::endl;
	*this = src;
	return ;
}

FragTrap & FragTrap::operator=( FragTrap const & src )
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

void  FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energyPoints >= 25)
	{
		int		r;

		srand(clock());
		this->_energyPoints -= 25;
		void	(FragTrap::*ptr[5])(std::string const &) = {
			&FragTrap::blightBotAttack,
			&FragTrap::gunWizardAttack,
			&FragTrap::lazerAttack,
			&FragTrap::torgueFiestaAttack,
			&FragTrap::oneShotWonderAttack
		};
		r = rand() % 5;
		(this->*ptr[r])(target);
	}
	else
		std::cout << "\033[1;32mFRAGTRAP: " << _name << " has not enaugh enery points\033[0m" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "\033[0;32mFR4G-TP <" << this->_name << ">"
	<< " attacks <" << target << "> at range, causing <"
	<< _rangedAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	return ;
}

void	FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "\033[0;32mFR4G-TP Hyah! Heyyah! take That <" << this->_name << ">"
	<< " attacks <" << target << " ,causing <"
	<< _meleeAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int		life;

	life = this->_hitPoints + this->_armorDamageReduction - amount;
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

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints >= 0 && (this->_hitPoints + amount) <= 100)
	{
		this->_hitPoints += amount;
		std::cout << "FR4G-TP " << this->_name << "BeRepaired with "
		<< amount << "and his life is " << this->_hitPoints << std::endl;
	}
	else if ((this->_hitPoints + amount) > 100)
	{
		std::cout << "FR4G-TP " << this->_name << "Can't have more than 100 HP LIFE is "
		<< this->_hitPoints << std::endl;
	}
	else
		std::cout << "Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
}

void	FragTrap::gunWizardAttack(std::string const & target)
{
	std::cout << "You can call me Gundalf! Avada kedavra! " << this->_name << " attacks " << 
	target << " causing 5 points of damage" << std::endl;
}

int		FragTrap::getPoints( void ) const
{
	return this->_hitPoints;	
}

void	FragTrap::lazerAttack(std::string const & target)
{
	std::cout << "Boogie time! Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!" << this->_name << " attacks " << 
	target << " causing 10 points of damage" << std::endl;
}

void	FragTrap::torgueFiestaAttack(std::string const & target)
{
	std::cout << "brought you a present: EXPLOSIONS! " << this->_name << " attacks " << 
	target << " causing 5 points of damage" << std::endl;
}

void	FragTrap::oneShotWonderAttack(std::string const & target)
{
	std::cout << "A whole lotta bullets in just one trigger pull! " << this->_name << " attacks " << 
	target << " causing 15 points of damage" << std::endl;
}

void	FragTrap::blightBotAttack(std::string const & target)
{
	std::cout << "Tell me I'm the prettiest! Hack the planet!, Activating good cop mode... " << this->_name << " attacks " << 
	target << " causing 10 points of damage" << std::endl;
}