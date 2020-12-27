#include "FragTrap.hpp"

int		FragTrap::_maxHitPoints = 100;
int		FragTrap::_maxEnergyPoints = 100;
int		FragTrap::_meleeAttackDamage = 30;
int		FragTrap::_rangedAttackDamage = 20;
int		FragTrap::_armorDamageReduction = 5;

FragTrap::FragTrap(void)
{
	std::cout << "Default Constructor called" << std::endl;
	_Name = "Default";
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	return ;
}

FragTrap::FragTrap(std::string const & name): _Name(name)
{
	std::cout << "Intiliazed Constructor called" << std::endl;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap& FragTrap::operator=(FragTrap const & src)
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

void	FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " << target
	<< " at range, causing " << this->_rangedAttackDamage << " points of damage!"
	<< std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " << target
	<< " at melee, causing " << this->_meleeAttackDamage << " points of damage!"
	<< std::endl;
	return ;
}

void	FragTrap::AssAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " <<
	target << " in the Ass causing " << " 10 points of damage! "
	<< std::endl;
}

void	FragTrap::BoomAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " <<
	target << " with boom causing " << " 15 points of damage! "
	<< std::endl;
}

void	FragTrap::PunchAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " <<
	target << " with Punch causing " << " 10 points of damage! "
	<< std::endl;
}

void	FragTrap::LofyAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " <<
	target << " with Lofy causing " << " 20 points of damage! "
	<< std::endl;
}

void	FragTrap::ZoroAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " <<
	target << " with Zoro causing " << " 15 points of damage! "
	<< std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	void	(FragTrap::*ptr[5])(std::string const &) = {
		&FragTrap::AssAttack,
		&FragTrap::BoomAttack,
		&FragTrap::PunchAttack,
		&FragTrap::LofyAttack,
		&FragTrap::ZoroAttack
	};
	srand(clock());
	int		r;
	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		r = rand() % 5;
		(this->*ptr[r])(target);
	}
	else
		std::cout << "FR4G-TP " << this->_Name << " hasn't enough energy!" << std::endl;
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
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