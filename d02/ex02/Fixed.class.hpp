/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:39:30 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:39:31 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CALSS_HPP
# define FIXED_CALSS_HPP

# include <iostream>
# include <cmath>

class Fixed{
	public:
		Fixed( void );
		Fixed( float const & fpnt);
		Fixed( int const & fpnt);
		Fixed( Fixed const & src );
		~Fixed( void );
		Fixed & operator=( Fixed const & src );
		bool	operator>( Fixed const & src );
		bool	operator<( Fixed const & src );
		bool	operator>=( Fixed const & src );
		bool	operator<=( Fixed const & src );
		bool	operator==( Fixed const & src );
		bool	operator!=( Fixed const & src );
		Fixed & operator*( Fixed const & src );
		Fixed & operator+( Fixed const & src );
		Fixed & operator-( Fixed const & src );
		Fixed & operator/( Fixed const & src );
		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);
		int		toInt( void ) const;
		float	toFloat( void ) const;
		static Fixed & max(Fixed & f1, Fixed & f2);
		static Fixed & min(Fixed & f1, Fixed & f2);
		static Fixed const & max(Fixed const & f1, Fixed const & f2);
		static Fixed const &  min(Fixed const & f1, Fixed const & f2);
	private:
		int					_fpnt;
		static int const 	_fbits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif