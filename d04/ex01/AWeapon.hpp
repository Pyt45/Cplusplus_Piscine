/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:53:53 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/04 16:34:00 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {
	public:
		AWeapon( void );
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon( AWeapon const & src );
		AWeapon & operator=( AWeapon const & src );
		virtual ~AWeapon( void );
		std::string const & getName() const;
		int					getAPCost() const;
		int					getDamage() const;
		virtual void		attack() const = 0;
	protected:
		std::string			_name;
		int					_apcost;
		int					_damage;
};

#endif