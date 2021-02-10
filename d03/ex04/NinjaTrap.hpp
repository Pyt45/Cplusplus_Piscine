/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:47:49 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/10 10:06:04 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
	public:
		NinjaTrap( void );
		NinjaTrap( std::string const & name );
		NinjaTrap( NinjaTrap const & src );
		NinjaTrap & operator=( NinjaTrap const & src );		
		~NinjaTrap( void );
		void		ninjaShoeBox(NinjaTrap const & ninja);
		void		ninjaShoeBox(ClapTrap const & clap);
		void		ninjaShoeBox(FragTrap const & frag);
		void		ninjaShoeBox(ScavTrap const & scav);
		void		rangedAttack(std::string const & target) const;
		void		meleeAttack(std::string const & target) const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
	private:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_level;
};

#endif