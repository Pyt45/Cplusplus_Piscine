#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b = Bureaucrat("Ayoub", 1);
	b -= 40;
	std::cout << b;

	/*while (1)
	{
		try {
			std::cout << "Minus -50\n";
			b -= 50;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
			break ;
		}
	}*/
	return 0;
}