#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP
# include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);
		Zombie		*randomChump();
		std::string	getType();
		void		setTypeZombie(std::string type);
	private:
		std::string	_type;
		Zombie		*zombie[5];
};

#endif