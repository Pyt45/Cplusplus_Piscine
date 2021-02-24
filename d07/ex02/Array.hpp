/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:46:07 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/24 11:46:42 by aaqlzim          ###   ########.fr       */
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
		Array( void ) {
			_arr = new T[0];
			_size = 0;
		}
		Array(unsigned int n) {
			_arr = new T[n];
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
				throw std::exception();
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
