/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:30:54 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/28 12:46:37 by aaqlzim          ###   ########.fr       */
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
		Squad( Squad const & ); // Done
		Squad & operator=( Squad const & ); // Done
		~Squad( void ); // Done
		
		bool					isAlredyThere(ISpaceMarine *, t_list *); // Done
		void					destroyContainer(); // Done
		void					copyUnits(); // Done
		virtual int 			getCount() const; // Done
		virtual ISpaceMarine* 	getUnit(int) const; // Done
		virtual int 			push(ISpaceMarine*); // Done
	private:
		t_list					*_container;
		int						_NU;
};

#endif