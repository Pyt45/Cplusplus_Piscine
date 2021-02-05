/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:21:50 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/04 14:45:21 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!"
	<< std::endl;
}

Sorcerer::Sorcerer( Sorcerer const & src )
{
	*this = src;
	return ;
}

Sorcerer & Sorcerer::operator=( Sorcerer const & src )
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_title = src._title;
	}
	return *this;
}

std::string Sorcerer::getName( void ) const
{
	return this->_name;
}

std::string Sorcerer::getTitle( void ) const
{
	return this->_title;
}

void	Sorcerer::polymorph( Victim const & src ) const
{
	src.getPolymorphed();
	return ;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & src)
{
	o << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}