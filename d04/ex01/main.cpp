/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:58:44 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/28 12:03:34 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	std::cout << "\n=================\n" << std::endl;
	Character* me1 = new Character("me1");

	std::cout << *me1;

	Enemy *b1 = new SuperMutant();

	AWeapon* pr1 = new PlasmaRifle();
	AWeapon* pf1 = new PowerFist();

	me1->equip(pr1);
	std::cout << *me1;
	me1->equip(pf1);

	
	me1->attack(b1);
	std::cout << *me1;
	me1->equip(pr1);
	std::cout << *me1;
	me1->attack(b1);
	std::cout << *me1;
	me1->attack(b1);
	std::cout << *me1;

	delete me;
	delete me1;
	delete pr;
	delete pr1;
	delete pf;
	delete pf1;
	// if (b)
	// 	delete b;
	if (b1)
		delete b1;
	return 0;
}