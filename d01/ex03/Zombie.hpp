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
		void		announce();
		std::string	randomName();
		std::string randomType();
		Zombie();
	private:
		std::string _type;
		std::string _name;
};

#endif