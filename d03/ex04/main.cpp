/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:52:20 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/10 10:08:29 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"


int main()
{
	SuperTrap super("SCAV-V0.1");
	std::cout << "\n";
	FragTrap	frag;
	std::cout << "\n";
	ScavTrap	scav;
	std::cout << "\n";
	ClapTrap	clap;
	std::cout << "\n";
	NinjaTrap	ninja("Ninja115");
	std::cout << "\n";

	std::string target[3] = {
		"\033[1;31mRobot number 1\033[0m",
		"\033[1;31mRobot number 2\033[0m",
		"\033[1;31mRobot number 3\033[0m"
	};
	// Super
	super.rangedAttack(target[0]);
	super.meleeAttack(target[1]);
	super.beRepaired(100);
	super.takeDamage(15);
	
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
	clap.beRepaired(15);
	std::cout << "\n";
	clap.takeDamage(15);
	std::cout << "\n";
	clap.rangedAttack(target[0]);
	std::cout << "\n";
	clap.meleeAttack(target[2]);
	std::cout << "\n";
	// Ninja
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
	ninja.ninjaShoeBox(clap);
	std::cout << "\n";
	
	std::cout << "\n";
	ninja.ninjaShoeBox(ninja);
	std::cout << "\n";
}