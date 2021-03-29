/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:52:20 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/29 12:54:15 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap alex ("Alex");
	ScavTrap scav ("Rock");
	std::cout << "\n\n";
	// Frag
	alex.meleeAttack("Robot number1");
	std::cout << "alex energy after he attacks target is " << alex.getEnergy() << std::endl;
	alex.beRepaired(10);
	std::cout << "alex energy is " << alex.getEnergy() << std::endl;
	alex.vaulthunter_dot_exe("Robot number2");
	std::cout << "alex energy is " << alex.getEnergy() << std::endl;
	alex.rangedAttack("Robot number3");
	std::cout << "alex energy after he attacks target is " << alex.getEnergy() << std::endl;
	alex.takeDamage(15);
	std::cout << "\n\n============================================================\n" << std::endl;
	// Scav
	scav.takeDamage(50);
	scav.beRepaired(52);
	std::cout << "Scav life is : " << scav.getEnergy() << std::endl;
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.takeDamage(56);
	std::cout << std::endl;
	return 0;
}