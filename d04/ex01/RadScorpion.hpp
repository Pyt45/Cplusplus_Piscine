/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:22:52 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/24 11:16:42 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
		RadScorpion( void );
		RadScorpion( RadScorpion const & src );
		RadScorpion & operator=( RadScorpion const & src );
		~RadScorpion( void );
};

#endif