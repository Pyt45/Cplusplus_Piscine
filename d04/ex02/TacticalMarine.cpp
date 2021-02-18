/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:16:30 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/18 17:08:30 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine( void )
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine( TacticalMarine const & src )
{
	*this = src;
	return ;
}

TacticalMarine & TacticalMarine::operator=( TacticalMarine const & src )
{
	static_cast<void>(src);
	return *this;
}

TacticalMarine::~TacticalMarine( void )
{
	std::cout << "Aaargh..." << std::endl;
}


void	TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine* 	TacticalMarine::clone() const
{
	return (new TacticalMarine(*this));
}