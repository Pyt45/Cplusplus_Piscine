/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:09:31 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/10 14:48:20 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( void )
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src )
{
	*this = src;
	return ;
}

AssaultTerminator & AssaultTerminator::operator=( AssaultTerminator const & src )
{
	(void)src;
	return *this;
}

AssaultTerminator::~AssaultTerminator( void )
{
	std::cout << "I’ll be back..." << std::endl;
}


void	AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine* 	AssaultTerminator::clone() const
{
	return (new AssaultTerminator);
}