#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")>"
	<< " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	announce();
}

Zombie::Zombie()
{
	this->_name = randomName();
	this->_type = randomType();
}

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")>"
	<< " is dead" << std::endl;
}

std::string	Zombie::randomName()
{
	std::string rand_names[5] = {"Bol", "Duh", "Poll", "Rock", "Pit"};
	std::string	name;
	int			r;

	srand(clock());
	r = rand() % 5;
	name = rand_names[r];
	return name;
}

std::string	Zombie::randomType()
{
	std::string rand_types[5] = {"killer", "Eater", "Cool", "Ugly", "Super"};
	std::string	type;
	int			r;

	srand(clock());
	r = rand() % 5;
	type = rand_types[r];
	return type;
}