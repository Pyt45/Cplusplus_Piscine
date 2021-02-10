/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 11:49:12 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/10 11:57:37 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria {
	public:
		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & );
		AMateria & operator=( AMateria const & );
		~AMateria( void );

		std::string const & getType() const;
		unsigned int getXP() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	private:
		unsigned int 	_xp;
		std::string 	_type;
};

#endif