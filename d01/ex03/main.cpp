#include "ZombieHorde.hpp"

int main()
{
    // srand(clock());
    ZombieHorde *z = new ZombieHorde(5);
    z->announce();
    return (0);
}