#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( FragTrap const & src);
		FragTrap( std::string const & name );
		~FragTrap( void );

		FragTrap& operator=(FragTrap const & src);
		void	vaulthunter_dot_exe(std::string const & target);

		// Attack Functions
		void	AssAttack(std::string const & target);
		void	BoomAttack(std::string const & target);
		void	PunchAttack(std::string const & target);
		void	LofyAttack(std::string const & target);
		void	ZoroAttack(std::string const & target);

	private:
		int			_hitPoints;
		int			_energyPoints;
		int			_level;
		std::string	_Name;
};
#endif