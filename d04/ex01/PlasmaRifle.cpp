/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:41:02 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/24 11:15:52 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ): AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src ) : AWeapon(src)
{
	return ;
}

PlasmaRifle & PlasmaRifle::operator=( PlasmaRifle const & src )
{
	static_cast<void>(src);
	return *this;
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle( void )
{
	return ;
}