#include "HumanA.hpp"

void	HumanA::attack() const {
	std::cout << "\033[0;31m" << this->_name
	<< "\033[0m" << "\033[0;32m attacks with his "
	<< "\033[0m" << "\033[0;36m" << this->_wp.getType()
	<< "\033[0m" << std::endl;
}

HumanA::~HumanA() { return ; }
HumanA::HumanA(std::string name, Weapon & wp): _name(name), _wp(wp)
{
	
	return ;
}