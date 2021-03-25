/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 11:41:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/25 10:24:29 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>

class FragTrap {
	public:
		FragTrap(std::string const & name);
		FragTrap( void );
		FragTrap( FragTrap const & src );
		FragTrap & operator=( FragTrap const & src );
		~FragTrap( void );

		void				rangedAttack(std::string const & target) const;
		void				meleeAttack(std::string const & target) const;
		void				takeDamage(unsigned int amount);
		void				vaulthunter_dot_exe(std::string const & target);
		void				beRepaired(unsigned int amount);
		int					getPoints( void ) const;
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
		// random function so that we can use them with vaulthunter_dot_exe
		void		blightBotAttack(std::string const & target);
		void		gunWizardAttack(std::string const & target);
		void		lazerAttack(std::string const & target);
		void		torgueFiestaAttack(std::string const & target);
		void		oneShotWonderAttack(std::string const & target);
};

#endif