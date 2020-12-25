#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Hello meleeAttack " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Hello rangedAttack " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Hello intimidatingShout " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	typedef void(Human::*PTR) (std::string const &);
	std::string fun[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	PTR ptr[3] = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	int		i = 0;

	for ( ; i < 3; i++)
	{
		if (fun[i] == action_name)
			(this->*ptr[i])(target);
	}
}

	// void	(Human::*ptr[3]) (std::string const &) = {
	// 	&Human::meleeAttack,
	// 	&Human::rangedAttack,
	// 	&Human::intimidatingShout
	// };