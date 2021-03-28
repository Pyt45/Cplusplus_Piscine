/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:53:36 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/28 11:59:09 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy {
	public:
		Enemy( void );
		Enemy(int hp, std::string const & type );
		Enemy( Enemy const & src );
		Enemy & operator=( Enemy const & src );
		virtual ~Enemy( void );
		std::string const & getType() const;
		int					getHP() const;

		virtual void 		takeDamage(int);
	protected:
		int					_hp;
		std::string			_type;
};

#endif