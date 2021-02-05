/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:38:47 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:38:48 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	std::cout << "Constructor called" << std::endl;
}

Human::~Human()
{
	std::cout << "Destructor called" << std::endl;
}

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "melee attack: " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "ranged attack: " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "intimidating attack: " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	std::string		s_member[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	void	(Human::*func_ptr[3])(std::string const & target) = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	for (int i = 0; i < 3; i++)
	{
		if (action_name == s_member[i])
			(this->*func_ptr[i])(target);
	}
}