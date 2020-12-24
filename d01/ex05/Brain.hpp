#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
	private:
		int		_iq;
	public:
		Brain();
		std::string identify() const;
};

#endif