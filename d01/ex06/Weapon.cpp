/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:38:28 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:38:29 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	return ;
}

Weapon::Weapon()
{
	return ;
}


Weapon::~Weapon() { return ; }

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string const & Weapon::getType() const
{
	return this->_type;
}