#include "ClassContact.hpp"

void	start()
{
		// std::cout << std::setw(60) << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	// std::cout << std::setw(60) << std::endl;
	std::cout << "| Welcome to 80s Software Phonebook |" << std::endl;
	// std::cout << std::setw(60) << std::endl;
	std::cout << "|         Available Commands        |" << std::endl;
	// std::cout << std::setw(60) << std::endl;
	std::cout << "|             1 - ADD               |" << std::endl;
	// std::cout << std::setw(60) << std::endl;
	std::cout << "|             2 - SEARCH            |" << std::endl;
	// std::cout << std::setw(60) << std::endl;
	std::cout << "|             3 - EXIT              |" << std::endl;
	// std::cout << std::setw(60) << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;
}

int		main()
{
	Contact	PhoneBook[MAX_CONTACT];
	int		i = 0;
	std::string	cmd;

	start();
	while (true)
	{
		std::cout << "Enter ur command: ";
		std::cin >> cmd;
		// std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			if (i < MAX_CONTACT)
				PhoneBook[i++] = AddContact();
			else
				std::cout << "PhoneBook is Full" << std::endl;
		}
		else if (cmd == "SEARCH")
		{
			if (i >= 0)
				PrintPhoneBook(PhoneBook, i);
		}
		else if (cmd == "EXIT")
			break ;
	}
	return 0;
}