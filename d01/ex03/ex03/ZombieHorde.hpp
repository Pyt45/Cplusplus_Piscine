#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"

class ZombieHorde {
	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void	announce();
	private:
		int		_N;
		Zombie	*_Z;
};

#endif