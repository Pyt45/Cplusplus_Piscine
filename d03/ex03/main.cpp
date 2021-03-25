/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:52:20 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/25 12:16:46 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"


int main()
{
	FragTrap	frag("Frogy");
	ScavTrap	scav("Rockly");
	ClapTrap	*clap = new ScavTrap("Samoray");
	ClapTrap	clap1;
	NinjaTrap	ninja("Ninja115");
	NinjaTrap	ninja1("Ninja112");

	std::string target[3] = {
		"\033[1;31mRobot number 1\033[0m",
		"\033[1;31mRobot number 2\033[0m",
		"\033[1;31mRobot number 3\033[0m"
	};

	// // Ninja
	ninja.beRepaired(15);
	std::cout << "\n";
	ninja.takeDamage(15);
	std::cout << "\n";
	ninja.rangedAttack(target[0]);
	std::cout << "\n";
	ninja.ninjaShoeBox(scav);
	std::cout << "\n";

	std::cout << "\n";
	ninja.ninjaShoeBox(frag);
	std::cout << "\n";

	std::cout << "\n";
	ninja.ninjaShoeBox(clap1);
	std::cout << "\n";
	
	std::cout << "\n";
	ninja.ninjaShoeBox(ninja1);
	std::cout << "\n";

	// Frag
	frag.beRepaired(15);
	std::cout << "\n";
	frag.takeDamage(15);
	std::cout << "\n";
	frag.rangedAttack(target[0]);
	std::cout << "\n";
	frag.vaulthunter_dot_exe(target[1]);
	std::cout << "\n";
	// Scav
	scav.beRepaired(15);
	std::cout << "\n";
	scav.takeDamage(15);
	std::cout << "\n";
	scav.rangedAttack(target[0]);
	std::cout << "\n";
	scav.challengeNewcomer();
	std::cout << "\n";
	// Clap
	clap->beRepaired(15);
	std::cout << "\n";
	clap->takeDamage(15);
	std::cout << "\n";
	clap->rangedAttack(target[0]);
	std::cout << "\n";
}