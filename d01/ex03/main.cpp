#include "ZombieHorde.hpp"

int main()
{
    ZombieHorde *z = new ZombieHorde(5);
    // ZombieHorde z1 = ZombieHorde(5);
    // z1.announce();
    delete [] z;
    return (0);
}