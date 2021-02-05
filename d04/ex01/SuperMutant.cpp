/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:18:00 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 12:43:25 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) : Enemy(70, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::SuperMutant( int hp, std::string const & type ): Enemy(hp, type)
{
	this->_hp = hp;
	this->_type = type;
	return ;
}

SuperMutant::~SuperMutant( void )
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

SuperMutant::SuperMutant( SuperMutant const & src )
{
	*this = src;
	return ;
}

SuperMutant & SuperMutant::operator=( SuperMutant const & src )
{
	if (this != &src)
	{
		this->_hp = src._hp;
		this->_type = src._type;
	}
	return *this;
}

void	SuperMutant::takeDamage(int d)
{
	if (d < 0)
		return ;
	this->_hp -= (d - 3);
}