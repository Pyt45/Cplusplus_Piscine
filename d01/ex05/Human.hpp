#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"
class Human
{
	private:
		Brain const brain;
	public:
		Human();
		std::string identify() const;
		const Brain& getBrain() const;
};

#endif