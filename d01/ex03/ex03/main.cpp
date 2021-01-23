#include "ZombieHorde.hpp"

int		main()
{
	ZombieHorde *z = new ZombieHorde(5);

	z->announce();
	delete z;
}