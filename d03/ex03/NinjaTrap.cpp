/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:47:52 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/03 11:04:43 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ) : ClapTrap()
{
	this->_name = ClapTrap::_name;
	std::cout << "\033[0;32mNinjaTrap: yo yo everyBody Welcome me am i awesome\033[0m" << std::endl;
	this->_hitPoints = ClapTrap::_maxHitPoints;
	this->_energyPoints = ClapTrap::_maxEnergyPoints;
	this->_level = ClapTrap::_level;
}

NinjaTrap::NinjaTrap( std::string const & name ) : ClapTrap(name)
{
	this->_name = name;
	std::cout << "\033[1;32mHello Moa ha ha ha !!, my name is \033[0m" << "\033[1;31m" << this->_name
	<< "\033[0m" << std::endl;
	this->_hitPoints = ClapTrap::_maxHitPoints;
	this->_energyPoints = ClapTrap::_maxEnergyPoints;
	this->_level = ClapTrap::_level;
}

NinjaTrap::~NinjaTrap( void )
{
	std::cout << "\033[1;32mIs it dead? Can, can I open my eyes now?\033[0m" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) : ClapTrap(src)
{
	std::cout << "\033[1;32Recompiling my combat code! This time i will be awesome, I promise\033[0m"
	<< std::endl;
	*this = src;
	return ;
}

NinjaTrap & NinjaTrap::operator=( NinjaTrap const & src )
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

void	NinjaTrap::ninjaShoeBox(NinjaTrap const & ninja)
{
	std::cout << "NINJA-TP: NINJA-TP attacks "
	<< this->_name << " with a fork while he is eating" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ClapTrap const & clap)
{
	std::cout << "NINJA-TP: NINJA-TP attacks "
	<< this->_name << " HEll NINJA" <<std::endl;	
}

void	NinjaTrap::ninjaShoeBox(FragTrap const & frag)
{
	std::cout << "NINJA-TP: NINJA-TP attacks " 
	<< this->_name << " Live Long Ninja, death to FR4G-TP" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ScavTrap const & scav)
{
	std::cout << "NINJA-TP: NINJA-TP attacks " << 
	this->_name << " WHAT A BADASS NINJA HE IS :)" << std::endl;
}