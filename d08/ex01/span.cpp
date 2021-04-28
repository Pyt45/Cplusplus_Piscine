/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:44:39 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/28 14:07:38 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( void ) {
    _v.reserve(0);
    _n = 0;
    return ;
}

Span::Span( unsigned int n ) {
    _v.reserve(n);
    _n = n;
    return ;
}

Span::Span( Span const & src ) {
    *this = src;
    return ;
}

Span & Span::operator=( Span const & src ) {
    if (this != &src)
    {
        this->_n = src._n;
        _v.clear();
        _v = src._v;
    }
    return *this;
}

Span::~Span( void ) {
    _v.clear();
    return ;
}

void    Span::addNumber(int num) {
    if (_v.size() < _n)
        _v.push_back(num);
    else
        throw FullSpanException();
}

long int     Span::shortestSpan(void) const {
    if (_n <= 1 || _v.size() <= 1)
        throw std::out_of_range("need more than one value");
    std::vector<int> cpy = _v;
    std::sort(cpy.begin(), cpy.end());
    long int shortSpan = static_cast<long int>(cpy.at(1)) - static_cast<long int>(cpy.at(0));
    for (size_t i = 1; i < cpy.size() - 1; i++)
    {
        if (cpy.at(i + 1) - cpy.at(i) < shortSpan)
            shortSpan = cpy.at(i + 1) - cpy.at(i);
    }
    return shortSpan;
}

long int     Span::longestSpan(void) const {
    if (_n <= 1 || _v.size() <= 1)
        throw std::out_of_range("need more than one value");
    std::vector<int> cpy = _v;
    std::sort(cpy.begin(), cpy.end());
    return static_cast<long int>(cpy.at(cpy.size() - 1)) - static_cast<long int>(cpy.at(0));
}
