/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:22:54 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 12:42:36 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy{
	public:
		SuperMutant( void );
		SuperMutant(int hp, std::string const & name);
		SuperMutant( SuperMutant const & src );
		SuperMutant & operator=( SuperMutant const & src );
		~SuperMutant( void );
		void			takeDamage(int);
	private:
		int				_hp;
		std::string		_name;
};

#endif