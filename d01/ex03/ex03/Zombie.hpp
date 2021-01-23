#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>

class Zombie {
	public:
		Zombie(std::string name, std::string type);
		~Zombie();
		void	announce();
		Zombie();
		std::string setType();
		std::string setName();
	private:
		std::string _name;
		std::string	_type;
};

#endif