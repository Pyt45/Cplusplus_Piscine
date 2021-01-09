#include "iter.hpp"

int mult(int a)
{
	a = a * 2;
	std::cout << a << " ";
	return a);
}

double mult(double a)
{
	a = a * 2;
	std::cout << a << " ";
	return a;
}
int div(double a)
{
    a = a / 2;
    std::cout << static_cast<int>(a) << " ";
    return static_cast<int>(a);
}

double div(int a)
{
    a = a / 2;
    std::cout << static_cast<double>(a) << " ";
    return (static_cast<double>(a));

}

int main()
{
	double arr[5] = {1, 2, 3, 4, 5};
	iter(arr, 5, static_cast<int (*)(double)>(div));
	std::cout << std::endl;
}