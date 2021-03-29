/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:47:52 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/29 15:22:27 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ) : ClapTrap()
{
	std::cout << "\033[0;32mNinjaTrap: yo yo everyBody Welcome me am i awesome\033[0m" << std::endl;
	ClapTrap::_maxHitPoints = 60;
	ClapTrap::_maxEnergyPoints = 120;
	ClapTrap::_level = 1;
	ClapTrap::_hitPoints = ClapTrap::_maxHitPoints;
	ClapTrap::_energyPoints = ClapTrap::_maxEnergyPoints;
	ClapTrap::_meleeAttackDamage = 60;
	ClapTrap::_rangedAttackDamage = 5;
	ClapTrap::_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap( std::string const & name ) : ClapTrap(name)
{
	std::cout << "\033[1;32mHello Moa ha ha ha !!, my name is \033[0m" << "\033[1;31m" << ClapTrap::_name
	<< "\033[0m" << std::endl;
	ClapTrap::_maxHitPoints = 60;
	ClapTrap::_maxEnergyPoints = 120;
	ClapTrap::_level = 1;
	ClapTrap::_hitPoints = ClapTrap::_maxHitPoints;
	ClapTrap::_energyPoints = ClapTrap::_maxEnergyPoints;
	ClapTrap::_meleeAttackDamage = 60;
	ClapTrap::_rangedAttackDamage = 5;
	ClapTrap::_armorDamageReduction = 0;
}

NinjaTrap::~NinjaTrap( void )
{
	std::cout << "\033[1;32mNinjaTrap: Is it dead? Can, can I open my eyes now?\033[0m" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) : ClapTrap(src)
{
	std::cout << "\033[1;32Recompiling my combat code! This time i will be awesome, I promise\033[0m"
	<< std::endl;
	return ;
}

NinjaTrap & NinjaTrap::operator=( NinjaTrap const & src )
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
	}
	return *this;
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap const & ninja)
{
	std::cout << "NINJA-TP: NINJA-TP attacks "
	<< ninja.getName() << " with a fork while he is eating" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ClapTrap const & clap)
{
	std::cout << "NINJA-TP: NINJA-TP attacks "
	<< clap.getName() << " HEll NINJA" <<std::endl;	
}

void	NinjaTrap::ninjaShoeBox(FragTrap const & frag)
{
	std::cout << "NINJA-TP: NINJA-TP attacks " 
	<< frag.getName() << " Live Long Ninja, death to FR4G-TP" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ScavTrap const & scav)
{
	std::cout << "NINJA-TP: NINJA-TP attacks " << 
	scav.getName() << " WHAT A BADASS NINJA HE IS :)" << std::endl;
}