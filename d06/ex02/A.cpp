/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:04:42 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/23 16:34:06 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A( void ) { return ; }
A::A( A const & src ) { *this = src; return ; }
A & A::operator=( A const & src ) { static_cast<void>(src); return *this; }
A::~A( void ) { return ; }

void	A::print() const {
	std::cout << "Class A" << std::endl;
}