/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 11:43:45 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/29 16:38:54 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "\033[1;31mFRAGTRAP: Heheheeee Boooaa CLAPTRAP THE FRAGTRAP, MY NAME IS \033[0m" << "\033[0;32m"
	<< ClapTrap::_name << "\033[0m" << std::endl;
	ClapTrap::_maxHitPoints = 100;
	ClapTrap::_maxEnergyPoints = 100;
	ClapTrap::_level = 1;
	ClapTrap::_hitPoints = _maxHitPoints;
	ClapTrap::_energyPoints = _maxEnergyPoints;
	ClapTrap::_meleeAttackDamage = 30;
	ClapTrap::_rangedAttackDamage = 20;
	ClapTrap::_armorDamageReduction = 5;
	srand(clock());
	return ;
}


FragTrap::~FragTrap( void )
{
	std::cout << "\033[1;32mFRAGTRAP: Is it dead? Can, can I open my eyes now?\033[0m" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap(name)
{
	std::cout << "\033[1;32mHey Everybody! Let's get this party started my name is \033[0m"
	<< "\033[0;32m" << ClapTrap::_name << "\033[0m" << std::endl;
	ClapTrap::_maxHitPoints = 100;
	ClapTrap::_maxEnergyPoints = 100;
	ClapTrap::_level = 1;
	ClapTrap::_hitPoints = _maxHitPoints;
	ClapTrap::_energyPoints = _maxEnergyPoints;
	ClapTrap::_meleeAttackDamage = 30;
	ClapTrap::_rangedAttackDamage = 20;
	ClapTrap::_armorDamageReduction = 5;
	srand(clock());
	return ;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src)
{
	std::cout << "\033[1;32Recompiling my combat code! This time i will be awesome, I promise\033[0m"
	<< std::endl;
	return ;
}

FragTrap & FragTrap::operator=( FragTrap const & src )
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
	}
	return *this;
}

void  FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (ClapTrap::_energyPoints >= 25)
	{
		int		r;

		srand(clock());
		ClapTrap::_energyPoints -= 25;
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
		std::cout << "\033[1;32mFRAGTRAP: " << ClapTrap::_name << " has not enough enery points\033[0m" << std::endl;
}


void	FragTrap::gunWizardAttack(std::string const & target)
{
	std::cout << "You can call me Gundalf! Avada kedavra! " << ClapTrap::_name << " attacks " << 
	target << " causing 5 points of damage" << std::endl;
}


void	FragTrap::lazerAttack(std::string const & target)
{
	std::cout << "Boogie time! Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!" << ClapTrap::_name << " attacks " << 
	target << " causing 10 points of damage" << std::endl;
}

void	FragTrap::torgueFiestaAttack(std::string const & target)
{
	std::cout << "brought you a present: EXPLOSIONS! " << ClapTrap::_name << " attacks " << 
	target << " causing 5 points of damage" << std::endl;
}

void	FragTrap::oneShotWonderAttack(std::string const & target)
{
	std::cout << "A whole lotta bullets in just one trigger pull! " << ClapTrap::_name << " attacks " << 
	target << " causing 15 points of damage" << std::endl;
}

void	FragTrap::blightBotAttack(std::string const & target)
{
	std::cout << "Tell me I'm the prettiest! Hack the planet!, Activating good cop mode... " << ClapTrap::_name << " attacks " << 
	target << " causing 10 points of damage" << std::endl;
}