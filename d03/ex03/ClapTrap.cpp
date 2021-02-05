#include "ClapTrap.hpp"

int		ClapTrap::_maxHitPoints = 100;
int		ClapTrap::_maxEnergyPoints = 50;
int		ClapTrap::_meleeAttackDamage = 20;
int		ClapTrap::_rangedAttackDamage = 15;
int		ClapTrap::_armorDamageReduction = 3;

ClapTrap::ClapTrap( void )
{
	_name = "Default";
	std::cout << "ClapTrap " << "\033[1;31m" << _name << "\033[0m" <<  " Called" << std::endl;
	_level = 1;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout<< "ClapTrap " << "\033[1;31m" << _name << "\033[0m" << " is dead" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const & name )
{
	_name = name;
	std::cout << "ClapTrap test " << _name <<  "Called" << std::endl;
	_level = 1;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "Recompiling my combat code!" << std::endl;
	*this = src;
	return;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & src )
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_level = src._level;
	}
	return *this;
}

void	ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << "\033[0;32mClapTrap <" << _name << ">"
	<< " attacks <" << target << "> at range, causing <"
	<< _rangedAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	return ;
}

void	ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << "\033[0;32mClapTrap Hyah! Heyyah! take That <" << _name << ">"
	<< " attacks <" << target << " ,causing <"
	<< _meleeAttackDamage << "> points of damage!\033[0m"
	<< std::endl; 
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int		life;

	life = _hitPoints + _armorDamageReduction - amount;
	if (life > 0 && _hitPoints > 0)
	{
		_hitPoints = _hitPoints + _armorDamageReduction - amount;
		std::cout << _name << " take damage of "
		<< amount - _armorDamageReduction << " and his life is "
		<< _hitPoints << std::endl;
	}
	else
	{
		_hitPoints = 0;
		std::cout << "Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints >= 0 && (_hitPoints + amount) <= 100)
	{
		_hitPoints += amount;
		std::cout << "FR4G-TP " << _name << "BeRepaired with "
		<< amount << "and his life is " << _hitPoints << std::endl;
	}
	else if ((_hitPoints + amount) > 100)
	{
		std::cout << "FR4G-TP " << _name << " Can't have more than 100 HP LIFE is "
		<< _hitPoints << std::endl;
	}
	else
		std::cout << "Hehehehe, mwaa ha ha ha, MWAA HA HA HA! you are dead!"
		<< " your life is 0" << std::endl;
}
