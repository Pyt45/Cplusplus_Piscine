/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:37:16 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:37:17 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

std::string ZombieEvent::getType()
{
	return this->_type;
}

ZombieEvent::ZombieEvent(void)
{
	this->_type = "Simple Zombie";
	std::cout << "Zombie on The Stack" << std::endl;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "ZombieEvent is dead!" << std::endl;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
	std::cout << "Zombie on The Heap" << std::endl;
	Zombie	*new_zombie = new Zombie(name, getType());
	return new_zombie;
}

Zombie	*ZombieEvent::randomChump()
{
	std::string rand_names[5] = {"Bol", "Duh", "Poll", "Rock", "Pit"};
	std::string	name;
	int			r;

	srand(time(NULL));
	r = rand() % 5;
	name = rand_names[r];
	Zombie *New = new Zombie(name, getType());
	New->announce();
	return New;
}