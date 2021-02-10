/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:01:51 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/10 15:01:53 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure( void );
		Cure( Cure const & );
		Cure & operator=( Cure const & );
		~Cure( void );

		AMateria* clone() const;
		void		use(ICharacter& target);
	private:
		std::string 	_type;
};

#endif