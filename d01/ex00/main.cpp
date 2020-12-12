#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony *pony = new Pony("rocket", "ayoub", 1);
	std::cout << "Rocker is now alive and allocated on the stack" << std::endl;
	std::cout << "when calling delete pony Destructor been applyed" << std::endl;
	delete (pony);
}

void	ponyOnTheStack()
{
	Pony pony("rocky", "duhh", 2);
	std::cout << "Destructor been called automaticly" << std::endl;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
}