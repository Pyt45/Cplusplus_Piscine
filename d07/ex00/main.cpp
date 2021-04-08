/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:45:31 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/08 15:24:06 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome {
	public:
		Awesome( int n ) : _n( n ) {}
		Awesome(void) {}
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int 	getValue() const {
			return this->_n;
		}
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.getValue();
	return o;
}

int main()
{
	// Basic types: int
	int a = 2;
	int b = 3;
	::swap( a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max<int>( a, b ) << std::endl;

	// Basic types: string
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c,d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min<std::string>( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	// Basic types: float
	float f1 = 5.4f;
	float f2 = 8.6f;
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	::swap<float>( f1, f2);
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	std::cout << "min( f1, f2 ) = " << ::min( f1, f2 ) << std::endl;
	std::cout << "max( f1, f2 ) = " << ::max<float>( f1, f2 ) << std::endl;

	// Complex types
	Awesome s(42);
	Awesome s1(1337);
	std::cout << "s = " << s << " and s1 = " << s1 << std::endl;
	::swap(s, s1);
	std::cout << "s = " << s << " and s1 = " << s1 << std::endl;
	std::cout << "max(s, s1) = " << max(s, s1) << std::endl;
	std::cout << "min(s, s1) = " << min(s, s1) << std::endl;
	return 0;
}
