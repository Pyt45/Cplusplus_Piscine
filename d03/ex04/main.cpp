/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:52:20 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/29 18:45:06 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"


int main()
{
	FragTrap	frag("Frogy");
	std::cout << "\n";
	ScavTrap	scav("Rockly");
	std::cout << "\n";
	NinjaTrap	ninja("Ninja");
	std::cout << "\n";
	NinjaTrap	ninja1("Bogy");
	std::cout << "\n";
	ClapTrap	clap("Clapy");
	std::cout << "\n";
	SuperTrap	super("Super");
	std::cout << "\n";

	std::string target[3] = {
		"\033[1;31mRobot number 1\033[0m",
		"\033[1;31mRobot number 2\033[0m",
		"\033[1;31mRobot number 3\033[0m"
	};
	// Ninja
	std::cout << "\n\n================NINJATRAP=============\n" << std::endl;
	ninja.beRepaired(15);
	std::cout << "ninja Energy is : " << ninja.getEnergy() << std::endl;
	std::cout << "\n";
	ninja.takeDamage(15);
	std::cout << "\n";
	ninja.rangedAttack(target[0]);
	std::cout << "ninja Energy is : " << ninja.getEnergy() << std::endl;
	std::cout << "\n";
	ninja.ninjaShoeBox(scav);
	std::cout << "\n";
	// Frag
	std::cout << "\n\n================FRAGTRAP==============\n" << std::endl;
	frag.meleeAttack(target[0]);
	std::cout << "Frag energy after he attacks target is " << frag.getEnergy() << std::endl;
	frag.beRepaired(10);
	std::cout << "alex energy is " << frag.getEnergy() << std::endl;
	frag.vaulthunter_dot_exe("Robot number2");
	std::cout << "frag energy is " << frag.getEnergy() << std::endl;
	frag.rangedAttack("Robot number3");
	std::cout << "frag energy after he attacks target is " << frag.getEnergy() << std::endl;
	frag.takeDamage(15);
	// Scav
	std::cout << "\n\n================SCAVTRAP==============\n" << std::endl;
	std::cout << "Scav energy is : " << scav.getEnergy() << std::endl;
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	std::cout << "Scav energy is : " << scav.getEnergy() << std::endl;
	scav.rangedAttack(target[2]);
	scav.meleeAttack(target[0]);
	// Super
	std::cout << "\n\n================SUPERTRAP=============\n" << std::endl;
	super.rangedAttack(target[0]);
	super.meleeAttack(target[1]);
	std::cout << "super energy after attack both target[0] and target[1] is : " <<
	super.getEnergy() << std::endl;
	super.takeDamage(50);
	super.vaulthunter_dot_exe(target[2]);
	super.vaulthunter_dot_exe(target[1]);
	super.vaulthunter_dot_exe(target[0]);
	super.vaulthunter_dot_exe(target[1]);
	super.beRepaired(50);
	std::cout << "super energy is : " << super.getEnergy() << std::endl;
	super.meleeAttack(target[1]);
	std::cout << "super energy is : " << super.getEnergy() << std::endl;
	std::cout << "\n\n\n";
}