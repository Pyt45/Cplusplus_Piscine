#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
# include <ctime>

class FragTrap
{
	public:
		FragTrap( void );
		FragTrap( FragTrap const & src);
		FragTrap( std::string const & name );
		~FragTrap( void );

		FragTrap& operator=(FragTrap const & src);

		void	rangedAttack(std::string const & target) const;
		void	meleeAttack(std::string const & target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);

		// Attack Functions
		void	AssAttack(std::string const & target);
		void	BoomAttack(std::string const & target);
		void	PunchAttack(std::string const & target);
		void	LofyAttack(std::string const & target);
		void	ZoroAttack(std::string const & target);

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