#include "FragTrap.hpp"

int main()
{
	FragTrap alex ("Alex");

	alex.rangedAttack("Robot number 1");
	alex.meleeAttack("Robot number 2");

	alex.beRepaired(10);
	alex.takeDamage(90);
	alex.takeDamage(20);
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.beRepaired(10);
	alex.takeDamage(20);
	alex.beRepaired(10);
	alex.takeDamage(20);
	alex.takeDamage(20);
	alex.takeDamage(20);
	return 0;
}