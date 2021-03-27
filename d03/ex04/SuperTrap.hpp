/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:50:21 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/27 17:32:12 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

# include "FragTrap.hpp"
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap( void );
		SuperTrap( std::string const & name );
		SuperTrap( SuperTrap const & src );
		SuperTrap & operator=( SuperTrap const & src );
		~SuperTrap( void );

		void		rangedAttack(std::string const & target) const;
		void		meleeAttack(std::string const & target) const;
	private:
		std::string		_name;
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