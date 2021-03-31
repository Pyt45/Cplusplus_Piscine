/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:46:07 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/31 12:39:54 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template<class T>
class Array {
	private:
		unsigned int _size;
		T			*_arr;
	public:
		class OutOfRange : public std::exception {
			public:
				virtual const char * what() const throw() {
					return "out of range";
				}
		};
		Array( void ) {
			_arr = new T[0];
			_arr[0] = 0;
			_size = 0;
		}
		Array(unsigned int n) {
			_arr = new T[n];
			_arr[0] = n;
			for (unsigned int i = 1; i < n; i++)
				_arr[i] = 0;
			_size = n;
		}
		Array( Array const & src ) {
			*this = src;
		}
		Array & operator=( Array const & src ) {
			if (this != &src) {
				_size = src._size;
				if (_arr)
					delete [] _arr;
				_arr = new T[src._size];
				for (int i = 0; i < static_cast<int>(src._size); i++)
					_arr[i] = src._arr[i];
			}
			return *this;
		}
		T & operator[]( unsigned int index ) {
			if (index >= _size)
				throw OutOfRange();
			return _arr[index];
		}
		unsigned int size() const {
			return _size;
		}
		~Array( void ) {
			if (_arr)
				delete [] _arr;
		}
};

#endif
