#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->_n = N;
	zombies = new Zombie[N];
}

void	ZombieHorde::announce(void)
{
	int		i;

	i = 0;
	while (i < this->_n)
	{
		zombies[i].announce();
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] zombies;
	std::cout << "All Zombie is dead" << std::endl;
}