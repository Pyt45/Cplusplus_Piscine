#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template<class T>

class Array
{
	private:
		unsigned int	_len;
		T				*_arr;
	public:
		Array( void ) {
			this->_arr = new T[0];
			this->_len = 0;
		};
		Array(unsigned int n): _len(n)
		{
			this->_arr = new T[n];
		};
		Array& operator=(Array const & src)
		{
			if (this == &src)
				return *this;
			this->_len = src._len;
			if (this->_arr)
				delete [] this->_arr;
			this->_arr = new T[src._len];
			for (auto i = 0 ; i < src._len ; i++)
				this->_arr[i] = src._arr[i];
			return *this;
		};

		T &operator[](unsigned int n)
		{
			if (n < this->_len)
				return this->_arr[n];
			throw std::exception();
		}

		Array(Array const & src) {
			*this = src;
		};
		~Array(void) {
			if (this->_arr)
				delete [] this->_arr;
		};
		int size() const {
			return this->_len;
		}
};

#endif