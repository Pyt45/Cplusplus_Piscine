/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 08:33:43 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/18 17:02:28 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator( void );
		AssaultTerminator( AssaultTerminator const & );
		AssaultTerminator & operator=( AssaultTerminator const & );
		~AssaultTerminator( void );

		void			battleCry() const;
		ISpaceMarine* 	clone() const;
		void 			rangedAttack() const;
		void 			meleeAttack() const;
};

#endif