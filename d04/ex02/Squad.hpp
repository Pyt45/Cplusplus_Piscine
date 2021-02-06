/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:30:54 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/06 12:07:03 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

typedef struct 		s_list
{
	ISpaceMarine	*instance;
	struct s_list	*next;
}					t_list;

class Squad : public ISquad {
	public:
		Squad( void ); // Done
		Squad( Squad const & );
		Squad & operator=( Squad const & );
		~Squad( void ); // Done
		
		bool			isAlredyThere(ISpaceMarine *, t_list *); // Done
		int 			getCount() const; // Done
		ISpaceMarine* 	getUnit(int) const; // Done
		int 			push(ISpaceMarine*); // Done
	private:
		t_list			*_container;
		int				_NU;
};

#endif