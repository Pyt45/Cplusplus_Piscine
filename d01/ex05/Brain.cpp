#include "Brain.hpp"

Brain::Brain()
{
    _iq = 120;
}

std::string Brain::identify() const
{
    std::stringstream add;
    add << this;
    return add.str();
}