#ifndef PONY_HPP
# define PONY_HPP

class Pony
{
	public:
		Pony(std::string name, std::string owner, int id_pony);
		~Pony(void);
	private:
		std::string name;
		std::string owner;
		int			id;    
};

#endif