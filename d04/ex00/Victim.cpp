/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:58:05 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/30 13:16:31 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( std::string const & name )
{
	this->_name = name;
	std::cout << "Some random victim called " << this->_name 
	<< " just appeared!" << std::endl;
	return ;
}

Victim::Victim( Victim const & src )
{
	*this = src;
	return ;
}

Victim & Victim::operator=( Victim const & src )
{
	if (this != &src)
		this->_name = src._name;
	return *this;
}

std::string Victim::getName( void ) const
{
	return this->_name;
}

Victim::~Victim( void )
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
	return ;
}

void	Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & src)
{
	o << "I'm " << src.getName() << " and I like otters!" << std::endl;
	return o;
}