/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:04:51 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/23 16:34:17 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B( void ) { return ; }
B::B( B const & src ) { *this = src; return ; }
B & B::operator=( B const & src ) { static_cast<void>(src); return *this; }
B::~B( void ) { return ; }

void	B::print() const {
	std::cout << "Class B" << std::endl;
}