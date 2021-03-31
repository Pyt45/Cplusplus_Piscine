/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 11:48:11 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/31 10:10:34 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include <unistd.h>

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
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    AMateria* tmp1;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    std::cout << "[+] ICE  = " << tmp->getType() << std::endl;
    sleep_time();
	
    tmp1 = src->createMateria("cure");
	me->equip(tmp1);
    std::cout << "[+] CURE = " << tmp1->getType() << std::endl;
    sleep_time();
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    sleep_time();
    me->use(1, *bob);
    std::cout << "[+] " << tmp->getType() << "  xp = " << tmp->getXP() << std::endl;
    sleep_time();
    std::cout << "[+] " << tmp1->getType() << " xp = " << tmp1->getXP() << std::endl;
    sleep_time();

    
    me->use(0, *bob);
    sleep_time();
    std::cout << "[+] " << tmp->getType() << "  xp = " << tmp->getXP() << std::endl;
    std::cout << "[+] " << tmp1->getType() << " xp = " << tmp1->getXP() << std::endl;
    sleep_time();

    delete bob;
    delete me;
    delete src;
}