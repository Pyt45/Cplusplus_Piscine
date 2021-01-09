#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T1, typename T2>

void	iter(T1 *arr, int len, T2 (*func)(T1))
{
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

#endif