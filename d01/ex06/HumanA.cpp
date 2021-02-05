/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:38:10 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:38:11 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack() const {
	std::cout << "\033[0;31m" << this->_name
	<< "\033[0m" << "\033[0;32m attacks with his "
	<< "\033[0m" << "\033[0;36m" << this->_wp.getType()
	<< "\033[0m" << std::endl;
}

HumanA::~HumanA() { return ; }
HumanA::HumanA(std::string name, Weapon & wp): _name(name), _wp(wp)
{
	
	return ;
}