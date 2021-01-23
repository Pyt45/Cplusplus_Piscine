#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {
	public:
		Human();
		~Human();
		Brain const & getBrain() const;
		std::string identify() const;
	private:
		Brain brain;
		
};

#endif