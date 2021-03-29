/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:57:35 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/29 12:37:08 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>

class ScavTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string const & name );
		ScavTrap( ScavTrap const & src );
		ScavTrap & operator=( ScavTrap const & src );
		~ScavTrap( void );
		
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		challengeNewcomer( void );
		void		beRepaired(unsigned int amount);
		unsigned int	getEnergy( void ) const;
	private:
		std::string	_name;
		unsigned int _hitPoints;
		unsigned int _maxHitPoints;
		unsigned int _energyPoints;
		unsigned int _maxEnergyPoints;
		unsigned int _level;
		unsigned int _meleeAttackDamage;
		unsigned int _rangedAttackDamage;
		unsigned int _armorDamageReduction;
};

#endif