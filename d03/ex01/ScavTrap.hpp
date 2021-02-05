/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 10:57:35 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/01/30 11:16:40 by aaqlzim          ###   ########.fr       */
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
		
		void		rangedAttack(std::string const & target) const;
		void		meleeAttack(std::string const & target) const;
		void		takeDamage(unsigned int amount);
		void		challengeNewcomer( void );
		void		beRepaired(unsigned int amount);
		int			getPoints( void ) const;
	private:
		std::string	_name;
		int			_hitPoints;
		static int	_maxHitPoints;
		int 		_energyPoints;
		static int	_maxEnergyPoints;
		int 		_level;
		static int	_meleeAttackDamage;
		static int	_rangedAttackDamage;
		static int	_armorDamageReduction;
};

#endif