/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:18:00 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/28 11:58:17 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
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
	Enemy::_hp -= (d - 3);
	if (Enemy::_hp < 0)
		Enemy::_hp = 0;
}