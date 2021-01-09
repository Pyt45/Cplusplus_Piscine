#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap Scav("scav");

	Scav.rangedAttack("player 1");
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
	Scav.challengeNewcomer();
}