/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 18:50:21 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/03 12:09:49 by aaqlzim          ###   ########.fr       */
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
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
	private:
		std::string		_name;
		int				_hitPoints;
		static int		_maxHitPoints;
		int				_energyPoints;
		static int		_maxEnergyPoints;
		int				_level;
		static int		_meleeAttackDamage;
		static int		_rangedAttackDamage;
		static int		_armorDamageReduction;
};

#endif