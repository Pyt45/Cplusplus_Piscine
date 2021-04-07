/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:04:27 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/06 15:58:27 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdexcept>

Base	*generate(void)
{
	Base	*ptr_obj = new A();
	Base	*ptr_obj1 = new B();
	Base	*ptr_obj2 = new C();
	Base *b_obj[3] = {ptr_obj, ptr_obj1, ptr_obj2};
	Base *r_obj = b_obj[rand() % 3];
	return dynamic_cast<Base*>(r_obj);
}

void	 identify_from_pointer(Base * p)
{
	std::string		output[3] = {
		"A",
		"B",
		"C"
	};
	Base *cl_a = dynamic_cast<A*>(p);
	if (cl_a)
		std::cout << output[0] << std::endl;
	Base *cl_b = dynamic_cast<B*>(p);
	if (cl_b)
		std::cout << output[1] << std::endl;
	Base *cl_c = dynamic_cast<C*>(p);
	if (cl_c)
		std::cout << output[2] << std::endl;
}

void	identify_from_reference(Base & p)
{
	std::string		output[3] = {
		"A",
		"B",
		"C"
	};
	try {
		A & cl_a = dynamic_cast<A&>(p);
		std::cout << output[0] << std::endl;
		static_cast<void>(cl_a);
	}
	catch( std::bad_cast & e )
	{
		std::cout << "Failed to A: " << e.what() << std::endl;
	}
	try {
		B & cl_b = dynamic_cast<B&>(p);
		std::cout << output[1] << std::endl;
		static_cast<void>(cl_b);
	}
	catch( std::bad_cast & e )
	{
		std::cout << "Failed to B: " << e.what() << std::endl;
	}
	
	try {
		C & cl_c = dynamic_cast<C&>(p);
		std::cout << output[2] << std::endl;
		static_cast<void>(cl_c);
	}
	catch( std::bad_cast & e )
	{
		std::cout << "Failed to C: " << e.what() << std::endl;
	}
}

int		main(void)
{
	srand(clock());
	Base *b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;
	return 0;
}