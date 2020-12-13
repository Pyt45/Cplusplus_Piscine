#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")>"
	<< " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

Zombie::~Zombie()
{
	std::cout << "Even though Zombie is dead now nothing to be faired of"
	<< std::endl;
}