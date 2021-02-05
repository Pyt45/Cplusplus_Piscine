/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 11:41:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/03 12:09:59 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap(std::string const & name);
		FragTrap( void );
		FragTrap( FragTrap const & src );
		FragTrap & operator=( FragTrap const & src );
		~FragTrap( void );

		void		vaulthunter_dot_exe(std::string const & target);
		void		rangedAttack(std::string const & target) const;
		void		meleeAttack(std::string const & target) const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
	private:
		std::string	_name;
		int			_hitPoints;
		int 		_energyPoints;
		int 		_level;
		void		blightBotAttack(std::string const & target);
		void		gunWizardAttack(std::string const & target);
		void		lazerAttack(std::string const & target);
		void		torgueFiestaAttack(std::string const & target);
		void		oneShotWonderAttack(std::string const & target);
};

#endif