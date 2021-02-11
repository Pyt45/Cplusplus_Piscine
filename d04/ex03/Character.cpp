/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:09:49 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/11 17:10:10 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	this->_name = "";
	this->_idx = 0;
	for (int i = 0; i < 4; i++)
	{
		this->_am[i] = NULL;
	}
	return ;
}

Character::Character( std::string const & name )
{
	this->_name = name;
	this->_idx = 0;
	for (int i = 0; i < 4; i++)
	{
		this->_am[i] = NULL;
	}
	return ;
}

Character::Character( Character const & src )
{
	for (int i = 0; i < this->_idx; i++)
		equip(src._am[i]);
	return ;
}

Character & Character::operator=( Character const & src )
{
	if (this != &src)
	{
		for (int i = 0; i < this->_idx; i++)
		{
			if (this->_am[i])
				delete this->_am[i];
			this->_am[i] = src._am[i];
		}
		this->_name = src._name;
		this->_idx = src._idx;
	}
	return *this;
}

Character::~Character( void )
{
	for (int i = 0; i < this->_idx; i++)
		delete this->_am[i];
	return ;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	int		i;

	i = 0;
	if (!this->_am[0])
	{
		this->_am[0] = m;
		this->_idx++;
	}
	else
	{
		while (i < 4)
		{
			if (!this->_am[i])
				this->_am[i] = m;
			i++;
		}
		this->_idx++;
	}
	return ;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->_idx)
		return ;
	this->_am[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= this->_idx)
		return ;
	this->_am[idx]->use(target);
	return ;
}