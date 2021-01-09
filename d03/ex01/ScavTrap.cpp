#include "ScavTrap.hpp"

int		ScavTrap::_maxHitPoints = 100;
int		ScavTrap::_maxEnergyPoints = 100;
int		ScavTrap::_meleeAttackDamage = 30;
int		ScavTrap::_rangedAttackDamage = 20;
int		ScavTrap::_armorDamageReduction = 5;

ScavTrap::ScavTrap(void)
{
	std::cout << "Default ScavTrap Constructor called" << std::endl;
	_Name = "Default";
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	return ;
}

ScavTrap::ScavTrap(std::string const & name): _Name(name)
{
	std::cout << "Intiliazed ScavTrap Constructor called" << std::endl;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "Copy constructor ScavTrap called" << std::endl;
	*this = src;
	return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	this->_Name = src._Name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_level = src._level;
	return *this;
}

void	ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " << target
	<< " at range, causing " << this->_rangedAttackDamage << " points of damage!"
	<< std::endl;
	return ;
}

void	ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " << target
	<< " at melee, causing " << this->_meleeAttackDamage << " points of damage!"
	<< std::endl;
	return ;
}

void	ScavTrap::challengeNewcomer()
{
	std::string challenge1 = "ClAPTRAP THE FRAGTRAP 🎉";
	std::string challenge2 = "HOLLY MOLLY DUH! 😀";
	std::string challenge3 = "LOL BRUH, 😂";
	std::string challenge4 = "BLA BLA BLA HHHHH 😎";
	std::string challenge5 = "Need an apple  🍏";

	std::string challenge[5] = {
		challenge1,
		challenge2,
		challenge3,
		challenge4,
		challenge5
	};

	srand(clock());
	int r = rand() % 5;
	std::cout << "challenge: ";
	std::cout << challenge[r] << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	long long life;

	life = this->_hitPoints - (long long)amount + this->_armorDamageReduction;
	if (life > 0 && this->_hitPoints > 0)
	{
		this->_hitPoints = this->_hitPoints + this->_armorDamageReduction - amount;
		std::cout << "FR4G-TP " << this->_Name << " take damage of "
		<< amount - this->_armorDamageReduction << " and life is " <<
		this->_hitPoints << std::endl;
	}
	else
	{
		this->_hitPoints = 0;
		std::cout << "FR4G-TP " << this->_Name << " dead" << std::endl;
	}
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints >= 0 && (amount + this->_hitPoints) <= 100)
	{
		this->_hitPoints += amount;
		std::cout << "FR4G-TP " << this->_Name << " has been repaired by "
		<< amount << " and life is " <<
		this->_hitPoints << std::endl;
	}
	else if ((amount + this->_hitPoints) > 100)
		std::cout << "FR4G-TP " << this->_Name
		<< " can't have more than 100" << std::endl;
	else
		std::cout << "FR4G-TP " << this->_Name <<
		" dead" << std::endl;
	return ;
}