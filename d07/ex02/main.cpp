/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:46:19 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/08 15:36:26 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class Awesome {
	public:
		Awesome( int n ) : _n( n ) {}
		Awesome(void) : _n(1337) {}
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

    Array<int> A;
    Array<int> B(10);


    try {
        for (int i = 0; i < 10; i++){
            B[i] = i;
            std::cout << B[i] << " ";
        }
    }
    catch (std::exception & e) {
        std::cout << std::endl << e.what() << std::endl;
    }
    std::cout << "\n= = = = = = = = = =" << std::endl;
    A = B;
    for (int i = 0; i < 10; i++)
        std::cout << A[i] << " ";
    std::cout << "\n= = = = = = = = = =" << std::endl;
    try {
        for (int i = 0; i < 11; i++){
            A[i] = i;
            std::cout << A[i] << " ";
        }
    }
    catch (std::exception & e) {
        std::cout << std::endl<< e.what() << std::endl;
    }
    Array<double>C(10);
    try {
        for (int i = 0; i < 10; i++){
            C[i] = i * 1.1;
            std::cout << C[i] << " ";
        }
    }
    catch (std::exception & e) {
        std::cout << std::endl<< e.what() << std::endl;
    }
    std::cout << "\n= = = = = = = = = = = = = = = = = = = " << std::endl;
    Array<double> E;

	E = C;
     try {
        for (int i = 0; i < 11; i++){
            std::cout << E[i] << " ";
        }
    }
    catch (std::exception & e) {
        std::cout << std::endl<< e.what() << std::endl;
    }
	std::cout << std::endl;

	Array<double> D(10);
    try {
        for (int i = 0; i < 10; i++){
            std::cout << D[i] << " ";
        }
    }
    catch (std::exception & e) {
        std::cout << std::endl<< e.what() << std::endl;
    }
	std::cout << std::endl;
    std::cout << "\n= = = = = = = = = =" << std::endl;
    Array<Awesome> O(5);

    try {
        for (int i = 0; i < 5; i++)
            O[i] = i;
        for (int i = 0; i < 6; i++)
            std::cout << O[i] << std::endl;
    } catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
