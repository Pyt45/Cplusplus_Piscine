/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 10:49:36 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/27 17:30:20 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap {
	public:
		ClapTrap( void );
		ClapTrap( std::string const & name );
		ClapTrap( ClapTrap const & src );
		ClapTrap & operator=( ClapTrap const & src );
		~ClapTrap( void );
		
		virtual void	rangedAttack(std::string const & target) const;
		virtual void	meleeAttack(std::string const & target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string getName(void) const;
	protected:
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