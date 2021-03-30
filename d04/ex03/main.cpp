/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 11:48:11 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/30 21:17:01 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);


	std::cout << std::endl;
	std::cout << "=============================\n" << std::endl;
	ICharacter *jimmy = bob;
	me->use(0, *jimmy);
	me->use(1, *jimmy);
	
	delete bob;
	delete me;
	delete src;
	return 0;
}
/*
void	sleep_time()
{
	std::cout << std::endl;
	usleep(500000);
}

int main()
{
	 IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* nkki = new Character("nkki");
    
    AMateria* tmp;
    AMateria* tmp2;
    tmp = src->createMateria("ice");
    nkki->equip(tmp);
    std::cout << "[+] ICE = " << tmp->getType() << std::endl;
    sleep_time();
	
    tmp2 = src->createMateria("cure");
    nkki->equip(tmp2);
    std::cout << "[+] CURE = " << tmp2->getType() << std::endl;
    sleep_time();
    
    ICharacter* bob = new Character("bob");
    
    nkki->use(0, *bob);
    sleep_time();
    nkki->use(1, *bob);
    std::cout << "[+] " << tmp->getType() << " xp = " << tmp->getXP() << std::endl;
    sleep_time();
    std::cout << "[+] " << tmp2->getType() << " xp = " << tmp2->getXP() << std::endl;
    sleep_time();

    
    nkki->use(0, *bob);
    sleep_time();
    std::cout << "[+] " << tmp->getType() << " xp = " << tmp->getXP() << std::endl;
    std::cout << "[+] " << tmp2->getType() << " xp = " << tmp2->getXP() << std::endl;
    sleep_time();

    delete bob;
    delete nkki;
    delete src;
}
*/