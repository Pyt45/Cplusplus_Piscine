/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:04:29 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/04 09:44:12 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"

class Sorcerer {
	public:
		Sorcerer( void );
		Sorcerer(std::string name, std::string title);
		Sorcerer( Sorcerer const & src );
		Sorcerer & operator=( Sorcerer const & src );
		virtual ~Sorcerer( void );
		std::string getName( void ) const;
		std::string getTitle( void ) const;
		void		polymorph( Victim const & ) const;
	private:
		std::string 	_name;
		std::string 	_title;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & src);

#endif