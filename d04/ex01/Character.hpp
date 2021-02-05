/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:16:20 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 11:49:22 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	public:
		Character( void );
		Character( std::string const & name );
		Character( Character const & src );
		Character & operator=( Character const & src );
		~Character( void );

		void				recoverAP();
		void				equip(AWeapon*);
		void				attack(Enemy*);
		std::string const & getName() const;
		int					getAP() const;
		AWeapon				*getWeapon() const;
	private:
		std::string			_name;
		int					_ap;
		AWeapon				*_wp;
};

std::ostream & operator<<(std::ostream & o, Character const & src);

#endif