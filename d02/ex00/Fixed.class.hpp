/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:39:03 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:39:04 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed {
	public:
		Fixed( void );
		~Fixed( void );
		Fixed( Fixed const & src );
		Fixed & operator=( Fixed const & src );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	private:
		int					_fpnt;
		static const	int	_fbits;
};

#endif