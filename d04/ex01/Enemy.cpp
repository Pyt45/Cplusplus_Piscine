/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:59:59 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/04 17:14:06 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( void )
{
	return ;
}

Enemy::Enemy(int hp, std::string const & type)
{
	this->_hp = hp;
	this->_type = type;
	return ;
}

Enemy::Enemy( Enemy const & src )
{
	*this = src;
	return ;
}

Enemy & Enemy::operator=( Enemy const & src )
{
	if (this != &src)
	{
		this->_hp = src._hp;
		this->_type = src._type;
	}
	return *this;
}

Enemy::~Enemy( void )
{
	return ;
}

std::string	const & Enemy::getType() const
{
	return this->_type;
}

int		Enemy::getHP() const
{
	return this->_hp;
}

void	Enemy::takeDamage(int d)
{
	if (d < 0)
		return ;
	this->_hp -= d;
}