/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:37:06 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:37:07 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent event;
	Zombie		*z1;
	Zombie		*z2;
	Zombie		*z[5];
	std::string		names[5] = {"Ayoub", "bo3o", "badu", "futo", "eron"};

	std::cout << event.getType() << std::endl;
	z1 = event.newZombie("Korama");
	z1->announce();
	event.setZombieType("SuperHungry");
	z2 = event.newZombie("Kuko");
	z2->announce();
	delete z2;

	event.setZombieType("CoolZombie");
	for (int i = 0; i < 5; i++)
	{
		z[i] = event.newZombie(names[i]);
		z[i]->announce();
		delete z[i];
	}
	event.setZombieType("UglyZombie");
	for (int j = 0; j < 5; j++)
	{
		z[j] = event.randomChump();
		delete z[j];
	}
	return 0;
}