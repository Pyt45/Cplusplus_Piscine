#include "ClassContact.hpp"

std::string erase_string(std::string buff)
{
	std::string		new_buff;

	new_buff = buff.erase(MAX_FIELD - 1, buff.length() - MAX_FIELD + 1);
	new_buff.append(".");
	return new_buff;
}

void	searchPhoneBook(Contact PhoneBook[], int index)
{
	int		i;

	std::cout << "Enter Index: ";
	std::cin >> i;
	if (i < index && i >= 0 && std::cin.good())
	{
		std::cout << "FirstName: " << PhoneBook[i].getFirstName() << std::endl;
		std::cout << "LastName: " <<  PhoneBook[i].getLastName() << std::endl;
		std::cout << "NickName: " <<  PhoneBook[i].getNickName() << std::endl;
		std::cout << "Login: " <<  PhoneBook[i].getLogin() << std::endl;
		std::cout << "PostalAddress: " <<  PhoneBook[i].getPostalAddress() << std::endl;
		std::cout << "EmailAddress: " <<  PhoneBook[i].getEmailAddress() << std::endl;
		std::cout << "PhoneNumber: " <<  PhoneBook[i].getPhoneNumber() << std::endl;
		std::cout << "BirthdayDate: " <<  PhoneBook[i].getBirthdayDate() << std::endl;
		std::cout << "FavoriteMeal: " <<  PhoneBook[i].getFavoriteMeal() << std::endl;
		std::cout << "UnderWearColor: " <<  PhoneBook[i].getUnderwearColor() << std::endl;
		std::cout << "DarkestSecret: " <<  PhoneBook[i].getDarkestSecret() << std::endl;
	}
	else
	{
		std::cout << "---------Index out of range---------" << std::endl;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}
}

void	PrintPhoneBook(Contact PhoneBook[], int index)
{
	int			i = 0;
	std::string	buffer;

	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while (i < index)
	{
		std::cout << "|" << std::setw(10);
		std::cout << i;
		std::cout << "|" << std::setw(10);
		buffer = (PhoneBook[i].getFirstName().length() > 10) ?
		(erase_string(PhoneBook[i].getFirstName())) : PhoneBook[i].getFirstName();
		std::cout << buffer;
		std::cout << "|" << std::setw(10);

		buffer = (PhoneBook[i].getLastName().length() > 10) ?
		(erase_string(PhoneBook[i].getLastName())) : PhoneBook[i].getLastName();
		std::cout << buffer;
		std::cout << "|" << std::setw(10);

		buffer = (PhoneBook[i].getNickName().length() > 10) ?
		(erase_string(PhoneBook[i].getNickName())) : PhoneBook[i].getNickName();
		std::cout << buffer;
		std::cout << "|" << std::endl;
		i++;
	}
	searchPhoneBook(PhoneBook, index);
}