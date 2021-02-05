/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:54:44 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/04 10:01:15 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim {
	public:
		Victim( void );
		Victim( std::string const & name );
		Victim( Victim const & src );
		Victim & operator=( Victim const & src );
		virtual ~Victim( void );
		std::string 	getName( void ) const;
		virtual void	getPolymorphed() const;
	protected:
		std::string _name;	
};

std::ostream & operator<<(std::ostream & o, Victim const & src);

#endif