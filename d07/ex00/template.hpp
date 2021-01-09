#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}
template <typename T>
T max(T const & a, T const & b)
{
	if ( a == b)
		return b;
	return (a > b ? a : b);
}
template <typename T>
T min(T const & a, T const & b)
{
	if (a == b)
		return b;
	return (a < b ? a : b);
}

#endif