/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:37:59 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:38:00 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() { return ; }
Human::~Human() { return ; }

std::string Human::identify() const
{
	return (this->brain.identify());
}

Brain const & Human::getBrain() const
{
	return (this)->brain;
}