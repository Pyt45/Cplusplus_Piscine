/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 10:49:36 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/03 12:09:16 by aaqlzim          ###   ########.fr       */
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
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);
	protected:
		std::string		_name;
		int				_hitPoints;
		static int		_maxHitPoints;
		int 			_energyPoints;
		static int		_maxEnergyPoints;
		int 			_level;
		static int		_meleeAttackDamage;
		static int		_rangedAttackDamage;
		static int		_armorDamageReduction;
};

#endif