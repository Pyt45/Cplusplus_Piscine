/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:37:12 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:37:13 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib> // srand, rand
# include <ctime> //, clock, time
#include <iomanip>

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void	announce();
	private:
		std::string type;
		std::string name;
};


#endif