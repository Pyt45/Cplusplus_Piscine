/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:48:58 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/24 11:16:34 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ): AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist( PowerFist const & src ): AWeapon(src)
{
	return ;
}

PowerFist & PowerFist::operator=( PowerFist const & src )
{
	static_cast<void>(src);
	return *this;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist( void )
{
	return ;
}