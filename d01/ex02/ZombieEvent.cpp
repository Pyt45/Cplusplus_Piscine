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
	this->_type = "simple Zombie";
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
	// char		generate_name[5];
	// std::string name;

	// srand(time(NULL));
	// for (auto i = 0; i < 5; i++)
	// 	generate_name[i] = char(rand() % 26 + 97);
	// name = std::string(generate_name, 5);
	// return name;
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