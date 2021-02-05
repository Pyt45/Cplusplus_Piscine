/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:30:54 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 17:40:26 by aaqlzim          ###   ########.fr       */
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
		
		int 			getCount() const;
		ISpaceMarine* 	getUnit(int);
		int 			push(ISpaceMarine*);
	private:
		t_list			*_squad;
		int				_NU;
};

#endif