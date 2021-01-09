#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>
# include <ctime>

class ScavTrap
{
	public:
		ScavTrap( void );
		ScavTrap( ScavTrap const & src);
		ScavTrap( std::string const & name );
		~ScavTrap( void );

		ScavTrap& operator=(ScavTrap const & src);

		void	rangedAttack(std::string const & target) const;
		void	meleeAttack(std::string const & target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer();

	private:
		static int	_maxHitPoints;
		static int	_maxEnergyPoints;
		static int	_meleeAttackDamage;
		static int	_rangedAttackDamage;
		static int	_armorDamageReduction;
		int			_hitPoints;
		int			_energyPoints;
		int			_level;
		std::string	_Name;
};

#endif