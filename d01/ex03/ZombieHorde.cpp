#include "ZombieHorde.hpp"

Zombie	*ZombieHorde::randomChump()
{
	std::string rand_names[5] = {"Bol", "Duh", "Poll", "Rock", "Pit"};
	std::string	name;
	int			r;

	srand(time(NULL));
	r = rand() % 5;
	name = rand_names[r];
	Zombie *New = new Zombie(name, getType());
	return New;
}

std::string ZombieHorde::getType()
{
	return this->_type;
}


void		ZombieHorde::setTypeZombie(std::string type)
{
	this->_type = type;
}

ZombieHorde::ZombieHorde(int N)
{
	std::string types[3] = {"coolZombie", "superZombie", "uglyZombie"};
	for (auto j = 0 ; j < 3 ; j++)
		setTypeZombie(types[j]);
	for (auto i = 0; i < N; i++)
	{
		this->zombie[i] = randomChump();
		zombie[i]->announce();
		delete zombie[i];
		// break ;
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "ZombieHorde is dead" << std::endl;
}