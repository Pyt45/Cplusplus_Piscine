/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:39:19 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:39:20 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed( void );
		Fixed( int const & fpnt );
		Fixed ( float const & fpnt );
		~Fixed( void );
		Fixed( Fixed const & src );
		Fixed & operator=( Fixed const & src );

		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					_fpnt;
		static const int	_fbits;
};

std::ostream & operator<<( std::ostream & o, Fixed const & src );

#endif