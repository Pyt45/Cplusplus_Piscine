/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:52:20 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/29 13:28:09 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
	FragTrap	frag("Samoray");
	ScavTrap	scav("Ninja");

	std::string target[3] = {
		"\033[1;31mRobot number 1\033[0m",
		"\033[1;31mRobot number 2\033[0m",
		"\033[1;31mRobot number 3\033[0m"
	};

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
	ScavTrap b = scav;
	std::cout << "b hitpoints is : " << b.getPoints() << std::endl;
	std::cout << "b energy is : " << b.getEnergy() << std::endl;
	b.challengeNewcomer();
	std::cout << "b energy is : " << b.getEnergy() << std::endl;
	b.takeDamage(103);
	std::cout << "\n\n";
}