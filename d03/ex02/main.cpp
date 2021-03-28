/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:52:20 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/28 15:38:35 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
	FragTrap	frag("Samoray");
	ScavTrap	scav("Ninja");
	ClapTrap	*clap = new FragTrap("Rockly");

	std::string target[3] = {
		"\033[1;31mRobot number 1\033[0m",
		"\033[1;31mRobot number 2\033[0m",
		"\033[1;31mRobot number 3\033[0m"
	};

	// Frag
	std::cout << "\n===========Frag==========\n\n";
	frag.beRepaired(15);
	std::cout << "\n";
	frag.takeDamage(15);
	std::cout << "\n";
	frag.rangedAttack(target[0]);
	std::cout << "\n";
	frag.vaulthunter_dot_exe(target[1]);
	frag.vaulthunter_dot_exe(target[1]);
	frag.vaulthunter_dot_exe(target[1]);
	FragTrap f(frag);
	f.vaulthunter_dot_exe(target[0]);
	f.vaulthunter_dot_exe(target[2]);
	// Scav
	std::cout << "\n==========Scav===========\n\n";
	scav.beRepaired(15);
	std::cout << "\n";
	scav.takeDamage(15);
	std::cout << "\n";
	scav.rangedAttack(target[0]);
	std::cout << "\n";
	scav.challengeNewcomer();
	std::cout << "\n";
	// Clap
	std::cout << "\n==========Clap===========\n\n";
	clap->beRepaired(15);
	std::cout << "\n";
	clap->takeDamage(15);
	std::cout << "\n";
	clap->rangedAttack(target[0]);
	std::cout << "\n";
	delete clap;
}