/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:44:44 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/25 00:44:01 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <list>
# include <ctime>
# include <vector>

class Span {
    public:
        class FullSpanException : public std::exception {
            public:
                virtual const char * what() const throw() {
                    return "Span is full";
                }  
        };
        Span( void );
        Span( unsigned int n );
        Span( Span const & );
        Span & operator=( Span const & );
        ~Span( void );

        void    addNumber(int num);
        long int     shortestSpan( void ) const;
        long int     longestSpan( void ) const;
        template<template<typename> class T>
        void addNumber(T<int *> begin, T<int *> end) {
            std::cout << "size = " << end - begin << std::endl;
            if (_v.size() < _n)
            {
                int j = 0;
                for (T<int *> i = begin; i != end; i++)
                    _v.push_back(*i);
            }
            else
                throw FullSpanException();
        }
        /*template < template < typename > class T >
        void addNumber(T<int*> begin, T<int*> end)
        {
            long int range = end - begin;
            if (range < 0)
                throw std::invalid_argument("begin adress is bigger than the end adress");
            if (range + this->_array.size() > this->_N)
                throw FullSpanException();
            this->_array.insert(this->_array.end(), begin, end);
            this->_isSorted = false;
        }*/
    private:
        std::vector<int> _v;
        unsigned int _n;
};

#endif
