#include "Logger.hpp"

void			Logger::logToConsole(std::string const & message)
{
	std::cout << message << std::endl;
}


void			Logger::logToFile(std::string const & message)
{
	return ;
}

std::string		Logger::makeLogEntry(std::string const & message)
{
	
}

void			Logger::log(std::string const & dest, std::string const & message)
{
	std::string func[2] = {"logToConsole", "logToFile"};
	void		(Logger::*ptr[2]) (std::string const &) = {
		&Logger::logToConsole,
		&Logger::logToFile
	};
	int		i = 0;
	for ( ; i < 2 ; i++)
	{
		if (func[i] == dest)
			(this->*ptr[i])(message);
	}
}