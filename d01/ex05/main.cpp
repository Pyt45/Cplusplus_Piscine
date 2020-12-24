#include "Human.hpp"

int main()
{
    Human   bob;
    const Brain b;
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
}