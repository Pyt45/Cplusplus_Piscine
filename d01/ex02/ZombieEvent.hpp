#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		std::string		randomChump();
		std::string		getType(void);
		Zombie			*newZombie(std::string name);
		void			setZombieType(std::string type);
	private:
		std::string _type;
};

#endif