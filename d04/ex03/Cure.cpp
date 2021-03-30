/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:02:43 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/30 21:12:21 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	return ;
}

Cure::Cure( Cure const & src ) : AMateria(src)
{
	return ;
}

Cure & Cure::operator=( Cure const & src )
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

Cure::~Cure( void ) { ; return ; }

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *"
	<< std::endl;
}