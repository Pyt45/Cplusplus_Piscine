/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:37:28 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:37:29 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{
	std::cout << "Zombie " << _name << " is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is dead" << std::endl;
}

void	Zombie::announce()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")>"
	<< " Braiiiiiiinnnssss..." << std::endl;
}


std::string		Zombie::setType()
{
	std::string types[5] = {"Cool", "Smart", "Ugly", "SuperCool", "Hero"};

	srand(clock());
	int		r = rand() % 5;
	return types[r];
}


std::string		Zombie::setName()
{
	std::string names[5] = {"rock", "jack", "korama", "dazai", "piko"};

	srand(clock());
	int		r = rand() % 5;
	return names[r];
}

Zombie::Zombie()
{
	this->_name = setName();
	this->_type = setType();
}