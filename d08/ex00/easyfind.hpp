#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <list>
#include <vector>
#include <map>
# include <stdexcept>

template<typename T>

int easyfind(T arr, int find)
{
	typename T::iterator it;
	typename T::iterator eit = arr.end();

	for (it = arr.begin() ; it != eit; it++)
	{
		if (*it == find)
			return 1;
	}
	throw std::exception();
}

#endif