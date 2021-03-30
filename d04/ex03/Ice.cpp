/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:02:41 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/30 13:58:52 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	return ;
}

Ice::Ice( Ice const & src ) : AMateria(src)
{
	return ;
}

Ice & Ice::operator=( Ice const & src )
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

Ice::~Ice( void ) { return ; }

AMateria*	Ice::clone() const
{
	return (new Ice);
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
	<< std::endl;
}