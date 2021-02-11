/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:15:31 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/11 18:47:04 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
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
	int		i;

	i = 0;
	while (i < 4)
	{
		if (this->_am[i])
			i++;
		else
			this->_am[i] = m;
	}
	return ;
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_am[i]->getType() == type)
			return this->_am[i];
	}
	return NULL;
}