/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:02:41 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/11 16:25:48 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void )
{
	this->_type = "ice";
	return ;
}

Ice::Ice( Ice const & src )
{
	*this = src;
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
	return (new Ice());
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
	<< std::endl;
}