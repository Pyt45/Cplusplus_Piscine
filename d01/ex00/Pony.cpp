/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:36:45 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:36:46 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string owner, int id_pony)
{
	this->name = name;
	this->owner = owner;
	this->id = id_pony;
	std::cout << "Pony is born" << std::endl;
	std::cout << "Pony name is " << this->name << " and his owner is " << this->owner << " with an id of " <<
	this->id << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Pony is dead" << std::endl;
}