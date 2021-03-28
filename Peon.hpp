/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:33:27 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/04 10:00:31 by aaqlzim          ###   ########.fr       */
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
		virtual ~Peon( void );

		virtual void	getPolymorphed() const;
	private:
		std::string _name;
};

#endif