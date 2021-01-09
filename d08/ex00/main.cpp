#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	std::vector<int>::const_iterator it;
	v.push_back(5);
	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);

	for (it = v.begin(); it != v.end(); it++)
		std::cout << *it << std::endl;
	std::cout << "============" << std::endl;
	std::cout << easyfind(v, 4) << std::endl;
}
