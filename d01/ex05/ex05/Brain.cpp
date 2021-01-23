#include "Brain.hpp"

Brain::Brain()
{
	this->_iq = 120;
}

Brain::~Brain() { return ; }

std::string Brain::identify() const
{
	std::stringstream 	str;
	str << this;
	return str.str();
}