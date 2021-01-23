#include "Human.hpp"

Human::Human() { return ; }
Human::~Human() { return ; }

std::string Human::identify() const
{
	return (this->brain.identify());
}

Brain const & Human::getBrain() const
{
	return (this)->brain;
}