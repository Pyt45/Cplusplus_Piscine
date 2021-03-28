/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:52:20 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/28 15:09:56 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap alex ("Alex");
	FragTrap vasya (alex);

	alex.rangedAttack("Robot number 1");
	alex.meleeAttack("Robot number 2");

	alex.beRepaired(10);
	alex.takeDamage(90);
	std::cout << alex.getPoints() << std::endl;
	alex.takeDamage(5);
	
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.beRepaired(10);
	alex.takeDamage(20);
	alex.beRepaired(10);
	alex.takeDamage(20);

	std::cout << std::endl;;
	vasya.beRepaired(10);
	vasya.takeDamage(90);
	vasya.vaulthunter_dot_exe("Robot  number 2");
	vasya.vaulthunter_dot_exe("Robot  number 2");
	vasya.vaulthunter_dot_exe("Robot  number 2");
	vasya.vaulthunter_dot_exe("Robot  number 2");
	vasya.vaulthunter_dot_exe("Robot  number 2");
}