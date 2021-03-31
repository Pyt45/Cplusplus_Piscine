/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:44:39 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/31 14:09:55 by aaqlzim          ###   ########.fr       */
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
    std::cout << "_v = " << _v.size() << " _n : " << _n << std::endl;
    if (_v.size() < _n)
        _v.push_back(num);
    else
        throw FullSpanException();
}

int     Span::shortestSpan(void) const {
    if (_n <= 1 || _v.size() <= 1)
        throw std::out_of_range("need more than one value");
    std::vector<int> cpy = _v;
    std::sort(cpy.begin(), cpy.end());
    long int shortSpan = static_cast<long int>(cpy.at(1)) - static_cast<long int>(cpy.at(0));
    for (int i = 1; i < static_cast<int>(cpy.size()) - 1; i++)
    {
        if (static_cast<long int>(cpy.at(i + 1)) - static_cast<long int>(cpy.at(i)))
            shortSpan = static_cast<long int>(cpy.at(i + 1)) - static_cast<long int>(cpy.at(i));
    }
    return shortSpan;
}

int     Span::longestSpan(void) const {
    if (_n <= 1 || _v.size() <= 1)
        throw std::out_of_range("need more than one value");
    std::vector<int> cpy = _v;
    std::sort(cpy.begin(), cpy.end());
    return cpy.at(static_cast<int>(cpy.size() - 1)) - cpy.at(0);
}
