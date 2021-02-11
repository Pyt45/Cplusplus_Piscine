/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:02:43 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/11 16:25:28 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void )
{
	this->_type = "cure";
	return ;
}

Cure::Cure( Cure const & src )
{
	*this = src;
	return ;
}

Cure & Cure::operator=( Cure const & src )
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

Cure::~Cure( void ) { return ; }

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *"
	<< std::endl;
}