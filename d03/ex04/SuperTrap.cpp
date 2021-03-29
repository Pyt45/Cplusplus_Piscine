/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:50:23 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/29 18:44:24 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"



SuperTrap::SuperTrap( void ) : ClapTrap(), FragTrap(),  NinjaTrap()
{
	std::cout << "\033[1;31mSP4G-TP: SuperTrap is in a good mode to start Eating banana\033[0m" << std::endl;
	_maxHitPoints = 100;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_hitPoints = 100;
	_energyPoints = 120;
	_level = 1;
	return ;
}

SuperTrap::SuperTrap( std::string const & name ) : ClapTrap(name), FragTrap(name),  NinjaTrap(name)
{
	std::cout << "\033[2;31mSP4G-TP: SuperTrap is in a good mode, Let's get start the party my name is \033[0m"
	<< "\033[1;31m" << ClapTrap::_name << "\033[0m" << std::endl;
	_maxHitPoints = 100;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_hitPoints = 100;
	_energyPoints = 120;
	_level = 1;
	return ;
}

SuperTrap::~SuperTrap( void )
{
	std::cout << "\033[1;32mSP4G-TP: Am I dead? Am I in heaven?\033[0m" << std::endl;
	return ;
}

SuperTrap::SuperTrap( SuperTrap const & src ) : ClapTrap(src), FragTrap(src),  NinjaTrap(src)
{
	std::cout << "\033[1;32SP4G-TP: SuperTrap Recompiling combat code!\033[0m"
	<< std::endl;
	return ;
}

SuperTrap & SuperTrap::operator=( SuperTrap const & src )
{
	if (this != &src)
		ClapTrap::operator=(src);
	return *this;
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}