#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed( void );
		Fixed( Fixed const & fxd );
		Fixed( int const & ipnt );
		Fixed( float const & fpnt );
		~Fixed();
		Fixed& operator=(Fixed const & fxd);

		int			getRawBits( void ) const;
		void		setRawBits(int const raw);
		float		toFloat( void ) const;
		int			toInt( void ) const;

	private:
		int					_fpnt;
		static const int	_fbits = 8;
};

std::ostream& operator<<( std::ostream& o, Fixed const & fxd );

#endif