/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 08:39:45 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/10 14:46:32 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
	public:
		TacticalMarine( void );
		TacticalMarine( TacticalMarine const & );
		TacticalMarine & operator=( TacticalMarine const & );
		~TacticalMarine( void );

		void			battleCry() const;
		ISpaceMarine* 	clone() const;
		void 			rangedAttack() const;
		void 			meleeAttack() const;
};

#endif