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
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}

Zombie  ZombieEvent::*newZombie(std::string name)
{
	ZombieEvent	event;
	std::string type;

	type = event.getType();
	Zombie	*new_zombie = new Zombie(name, type);
	return &new_zombie;
}