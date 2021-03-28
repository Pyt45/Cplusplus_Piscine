#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	this->_name = "Default";
	std::cout << "ClapTrap " << "\033[1;31m" << this->_name << "\033[0m" <<  " Called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout<< "ClapTrap " << "\033[1;31m" << this->_name << "\033[0m" << " is dead" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const & name )
{
	this->_name = name;
	std::cout << "ClapTrap " << this->_name <<  " Called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	*this = src;
	std::cout << "Recompiling my combat code!" << std::endl;
	return;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & src )
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_maxEnergyPoints = src._maxEnergyPoints;
		this->_maxHitPoints = src._maxHitPoints;
		this->_armorDamageReduction = src._armorDamageReduction;
		this->_meleeAttackDamage = src._meleeAttackDamage;
		this->_rangedAttackDamage = src._rangedAttackDamage;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_level = src._level;
	}
	return *this;
}

void	ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << "\033[0;32mClapTrap <" << this->_name << ">"
	<< " attacks <" << target << "> at range, causing <"
	<< this->_rangedAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	return ;
}

void	ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << "\033[0;32mClapTrap Hyah! Heyyah! take That <" << this->_name << ">"
	<< " attacks <" << target << ">" << " ,causing <"
	<< this->_meleeAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	long int life = 0;
	if (static_cast<long int>(this->_hitPoints) + static_cast<long int>(this->_armorDamageReduction) - static_cast<long int>(amount) < 0)
		life = 0;
	else
		life = static_cast<long int>(this->_hitPoints) + static_cast<long int>(this->_armorDamageReduction) - static_cast<long int>(amount);
	if (life > 0 && this->_hitPoints > 0)
	{
		this->_hitPoints = this->_hitPoints + this->_armorDamageReduction - amount;
		std::cout << this->_name << " take damage of "
		<< amount - this->_armorDamageReduction << " and his life is "
		<< this->_hitPoints << std::endl;
	}
	else
	{
		this->_hitPoints = this->_maxHitPoints;
		std::cout << "Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints >= 0 && (this->_hitPoints + amount) <= this->_maxHitPoints)
	{
		this->_hitPoints += amount;
		std::cout << "FR4G-TP " << this->_name << " BeRepaired with "
		<< amount << " and his life is " << this->_hitPoints << std::endl;
	}
	else if ((this->_hitPoints + amount) > this->_maxHitPoints)
	{
		this->_hitPoints = this->_maxHitPoints;
		std::cout << "FR4G-TP " << this->_name << " Can't have more than " << this->_maxHitPoints << " HP LIFE is "
		<< this->_hitPoints << std::endl;
	}
	else
		std::cout << "Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return this->_name;
}