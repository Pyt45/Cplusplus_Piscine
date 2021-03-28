/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:36:25 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/28 10:44:45 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon( std::string const & name ) : Victim(name)
{
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon( Peon const & src ) : Victim(src)
{
	*this = src;
	return ;
}

Peon & Peon::operator=( Peon const & src )
{
	if (this != &src)
		this->_name = src._name;
	return *this;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
	return ;
}