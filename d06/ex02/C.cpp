/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:05:01 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/23 16:34:26 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C( void ) { return ; }
C::C( C const & src ) { *this = src; return ; }
C & C::operator=( C const & src ) { static_cast<void>(src); return *this; }
C::~C( void ) { return ; }

void	C::print() const {
	std::cout << "Class C" << std::endl;
}