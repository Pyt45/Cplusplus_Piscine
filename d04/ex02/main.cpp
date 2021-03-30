/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 12:48:10 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/30 14:02:18 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	// ISpaceMarine* jim1 = jim->clone();

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	// vlc->push(jim1);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << std::endl;
	std::cout << "=========================" << std::endl;
	std::cout << std::endl;

	ISquad *vp = new Squad;
	ISquad *v = vp;
	ISpaceMarine* rock = new TacticalMarine;
	vp->push(rock);

	ISpaceMarine *cur = v->getUnit(0);
	cur->battleCry();
	return 0;
}