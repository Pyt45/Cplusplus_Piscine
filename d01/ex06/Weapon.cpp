#include "Weapon.hpp"

Weapon::Weapon(std::string tp)
{
    this->type = tp;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType() const
{
    return this->type;
}