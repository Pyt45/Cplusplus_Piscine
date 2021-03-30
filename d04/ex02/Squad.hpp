/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:30:54 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/30 13:53:54 by aaqlzim          ###   ########.fr       */
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
		Squad( void );
		Squad( Squad const & );
		Squad & operator=( Squad const & );
		~Squad( void );
		
		bool					isAlredyThere(ISpaceMarine *, t_list *);
		void					destroyContainer();
		void					copyUnits();
		virtual int 			getCount() const;
		virtual ISpaceMarine* 	getUnit(int) const;
		virtual int 			push(ISpaceMarine*);
	private:
		t_list					*_container;
		int						_NU;
};

#endif