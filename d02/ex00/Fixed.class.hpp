#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & fxd);
		~Fixed(void);

		Fixed& operator=(Fixed const & fxd);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_fpnt;
		static int const	_fbits = 8;
};

#endif