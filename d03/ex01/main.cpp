/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:52:20 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/01 10:38:06 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap alex ("Alex");
	ScavTrap scav ("Rock");

	// Alex
	alex.meleeAttack("Robot number1");
	alex.beRepaired(10);
	alex.vaulthunter_dot_exe("Robot number2");
	alex.rangedAttack("Robot number3");
	std::cout << "alex life is " << alex.getPoints() << std::endl;
	alex.takeDamage(15);
	std::cout << "alex life is " << alex.getPoints() << std::endl;
	std::cout << "\n\n============================================================\n" << std::endl;
	// Scav
	scav.beRepaired(52);
	scav.takeDamage(50);
	scav.challengeNewcomer();
	std::cout << std::endl;
	return 0;
}