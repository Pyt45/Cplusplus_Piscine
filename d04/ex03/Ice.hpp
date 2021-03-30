/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:01:47 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/30 13:58:24 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice( void );
		Ice( Ice const & );
		Ice & operator=( Ice const & );
		~Ice( void );

		AMateria* clone() const;
		void		use(ICharacter& target);
};

#endif