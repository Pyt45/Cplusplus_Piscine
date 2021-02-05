/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:37:52 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:37:53 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_iq = 120;
}

Brain::~Brain() { return ; }

std::string Brain::identify() const
{
	std::stringstream 	str;
	str << this;
	return str.str();
}