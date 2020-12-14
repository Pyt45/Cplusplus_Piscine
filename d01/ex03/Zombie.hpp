#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>
#include <iomanip>

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void	announce();
	private:
		std::string type;
		std::string name;
};

#endif