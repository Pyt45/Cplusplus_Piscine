#include "ZombieHorde.hpp"

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->_N ; i++)
	{
		_Z[i].announce();
	}
}


ZombieHorde::ZombieHorde(int N)
{
	if (N < 1)
		N = 0;
	this->_N = N;
	this->_Z = new Zombie[this->_N];
}

ZombieHorde::~ZombieHorde()
{
	delete [] _Z;
	std::cout << "All Zombies are Dead" << std::endl;
}