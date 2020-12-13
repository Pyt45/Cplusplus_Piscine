#include "ZombieEvent.hpp"


std::string	ZombieEvent::randomChump()
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
	return name;
}

int main()
{
	ZombieEvent event;
	Zombie		*z1;
	Zombie		*z2;

	event.setZombieType("Killer");
	z1 = event.newZombie(event.randomChump());
}