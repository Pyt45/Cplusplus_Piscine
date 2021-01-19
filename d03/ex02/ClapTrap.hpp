#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
# include <ctime>

class ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( ClapTrap const & src );
		~ClapTrap( void );

		ClapTrap& operator=( ClapTrap const & src );

		void	rangedAttack(std::string const & target) const;
		void	meleeAttack(std::string const & target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		static int	_maxHitPoints;
		static int	_maxEnergyPoints;
		static int	_meleeAttackDamage;
		static int	_rangedAttackDamage;
		static int	_armorDamageReduction;
		
};

#endif