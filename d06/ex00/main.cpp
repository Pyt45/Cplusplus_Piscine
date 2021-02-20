/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:40:40 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/20 12:58:55 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Scalar.Conversion.hpp"
#include <iostream>
#include <sstream>
#include <typeinfo>
#include <cstring>

class Base {
	public:
		virtual void print() const {
			std::cout << "hello from Base class" << std::endl;
		}	
};

class Drived : public Base {
	public:
		virtual void print() const {
			std::cout << "hellow from Drived class" << std::endl;
		}	
};

int		main(int argc, char **argv)
{
	static_cast<void>(argc);
	static_cast<void>(argv);
	Base *b = new Base();
	Drived *d = new Drived();
	b->print();
	b = dynamic_cast<Drived*>(d);
	b->print();
	std::cout << b << std::endl;
	std::cout << d << std::endl;
	// int a = 42;
	// int const *c = &a;
	// int *b = &a;
	// int *e = const_cast<int*>(c);
	// int *f = static_cast<int*>(b);
	// std::cout << c << std::endl;
	// std::cout << e << std::endl;
	// std::cout << b << std::endl;
	// std::cout << f << std::endl;
	// std::string s = argv[1];
	// std::stringstream ss(s);
	// float f = 0.0f;
	// int	num = 0;
	// double d = 0;
	// char c;
	// ss >> f;
	// std::cout << "f has a type : " << typeid(f).name() << std::endl;	
	// int n;
	// float f = 5.2;
	// memcpy(&n, &f, 4);
	// std::cout << n << std::endl;
	// double b = a;
	// double c = (double)a;

	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << c << std::endl;
	return 0;
}