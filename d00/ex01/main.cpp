#include "ClassContact.hpp"

void    menu()
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

int     main()
{
	int			index_contact;
	contact		Phonebook[MAX_CONTACT];
	std::string	cmd;

	index_contact = 0;
	menu();
	while (1)
	{
		getline(std::cin, cmd, '\n');
		if (cmd == "ADD")
		{
			if (index_contact < MAX_CONTACT)
				Phonebook[index_contact++] = addContact();
			else
				std::cout << "The phoneBook is fully idiot" << std::endl;
		}
		else if (cmd == "SEARCH")
		{
			if (index_contact > 0)
				PrintPhoneBook(Phonebook, index_contact);
		}
		else if (cmd == "EXIT")
			break ;
		else if (cmd != "\0")
			std::cout << "Please Enter a Valid Command" << std::endl;
	}
	return 0;
}