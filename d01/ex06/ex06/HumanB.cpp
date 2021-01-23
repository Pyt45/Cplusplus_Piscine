#include "HumanB.hpp"

HumanB::~HumanB() { return ; }
HumanB::HumanB(std::string name): _name(name)
{
	return ;
}

void	HumanB::attack() const {
	std::cout << "\033[0;31m" << this->_name
	<< "\033[0m" << "\033[0;32m attacks with his "
	<< "\033[0m" << "\033[0;36m" << this->_wp->getType()
	<< "\033[0m" << std::endl;
}

void	HumanB::setWeapon(Weapon & wp)
{
	this->_wp = &wp;
}