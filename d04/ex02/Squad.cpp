 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:34:59 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 17:45:06 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void )
{
	_container = NULL;
	_NU = 0;
	return ;
}

Squad::Squad ( Squad const & src )
{
	*this = src;
	return ;
}

Squad & Squad::operator=( Squad const & src )
{
	t_list	*tmp = _container;
	t_list  *tmp1 = src._container;
	if (this != &src)
	{
		while (tmp1)
		{
			if (this->_container == NULL)
			{
				this->_container = new(t_list);
				this->_container->instance = tmp1->instance;
				this->_container->next = NULL;
			}
			else
			{
				if (isAlredyThere(tmp1->instance, _container) == true)
				{
					delete _container->instance;
					this->_container->instance = tmp1->instance;
					this->_container->next = tmp1->next;
				}
				else
				{	
					this->_container->instance = tmp1->instance;
					this->_container->next = tmp1->next;
				}
			}
			tmp1 = tmp1->next;
		}
		this->_NU = src._NU;
	}
}

int		Squad::getCount() const
{
	return _NU;
}

bool	Squad::isAlredyThere(ISpaceMarine *sm, t_list *list)
{
	if (sm == NULL)
		return false;
	else if (sm == list->instance)
		return true;
	else
		return isAlredyThere(sm, list->next);
	return false;
}

ISpaceMarine * Squad::getUnit(int N) const
{
	t_list	*tmp;

	tmp = _container;
	if (N > _NU || N < 0)
		return NULL;
	while (N--)
		tmp = tmp->next;
	return tmp->instance;
}

int		Squad::push(ISpaceMarine *sm)
{
	if (sm && isAlredyThere(sm, _container) == false)
	{
		t_list	*last = new(t_list);
		last->instance = sm;
		last->next = NULL;
		if (_container == NULL)
		{
			_container = new(t_list);
			_container->instance = last->instance;
			_container->next = NULL;
		}
		else
		{
			while (_container->next)
				_container = _container->next;
			_container->next->instance = last->instance;
			_container->next->next = last->next;
		}
		_NU += 1;
	}
	return _NU;
}

Squad::~Squad( void )
{
	t_list *tmp;

	while (_container)
	{
		tmp = _container;
		delete _container->instance;
		_container = _container->next;
		delete tmp;
	}
	// delete _container;
	return ;
}

