/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:52:20 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/29 12:28:19 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap alex ("Alex");

	alex.rangedAttack("Robot number 1");
	alex.meleeAttack("Robot number 2");

	alex.beRepaired(10);
	alex.takeDamage(90);
	std::cout << alex.getEnergy() << std::endl;
	alex.beRepaired(50);
	alex.rangedAttack("Robot number 1");
	alex.meleeAttack("Robot number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.rangedAttack("Robot number 1");
	alex.meleeAttack("Robot number 2");
	std::cout << "ER = " << alex.getEnergy() << std::endl;

	std::cout << std::endl;;
	FragTrap vasya (alex);
	vasya.beRepaired(10);
	std::cout << "ER = " << vasya.getEnergy() << std::endl;
	vasya.vaulthunter_dot_exe("Robot  number 2");
	std::cout << "ER = " << vasya.getEnergy() << std::endl;
	vasya.takeDamage(90);
}