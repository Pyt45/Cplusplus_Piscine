/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:15:31 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/30 21:13:18 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	this->_am = new AMateria*[4];
	this->_idx = 0;
	for (int i = 0; i < 4; i++)
		this->_am[i] = NULL;
	return ;
}

MateriaSource::MateriaSource( MateriaSource const & src)
{
	(void )src;
	return ;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & src )
{
	(void )src;
	return *this;
}

MateriaSource::~MateriaSource( void )
{
	return ;
}

void	MateriaSource::learnMateria( AMateria *m )
{
	if (this->_idx >= 4 || this->_idx < 0)
		return ;
	this->_am[this->_idx++] = m;
	return ;
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
	AMateria *tmp;

	if (this->_idx >= 4 || this->_idx < 0)
		return NULL;
	for (int i = 0; i < this->_idx; i++)
	{
		if (this->_am[i]->getType() == type)
		{
			tmp = this->_am[i];
			return tmp;
		}
	}
	return NULL;
}