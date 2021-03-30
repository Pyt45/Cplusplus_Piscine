/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:33:27 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/30 13:45:55 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim {
	public:
		Peon( void );
		Peon( std::string const & name );
		Peon( Peon const & src );
		Peon & operator=( Peon const & src );
		~Peon( void );

		void	getPolymorphed() const;
};

#endif