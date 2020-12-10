#include "ClassContact.hpp"

std::string erase_string(std::string field)
{
    field.erase(MAX_WIDTH - 1, field.length() - (MAX_WIDTH - 1));
    field.append(".");
    return field;
}

void    searchPhoneBook(contact phonebook[], int index_contact)
{
    int     index;

    std::cout << "Index Search: ";
    std::cin >> index;
    if (std::cin.good() && (index >= 0 && index < index_contact))
    {
        std::cout << phonebook[index].getFirstName() << std::endl;
        std::cout << phonebook[index].getLastName() << std::endl;
        std::cout << phonebook[index].getNickName() << std::endl;
        std::cout << phonebook[index].getLogin() << std::endl;
        std::cout << phonebook[index].getPostalAddress() << std::endl;
        std::cout << phonebook[index].getEmailAddress() << std::endl;
        std::cout << phonebook[index].getPhoneNumber() << std::endl;
        std::cout << phonebook[index].getBirthdayDate() << std::endl;
        std::cout << phonebook[index].getFavoriteMeal() << std::endl;
        std::cout << phonebook[index].getUnderWearColor() << std::endl;
        std::cout << phonebook[index].getDarkestSecret() << std::endl;
    }
    else
    {
        std::cin.clear();
        std::cout << "That index was not founded in the phoneBook :( !" << std::endl;
    }
    return ;
}

void    PrintPhoneBook(contact phonebook[], int index_contact)
{
    int         i;
    std::string field;
    std::string firstname;
    std::string lastname;
    std::string nickname;

    i = 0;
    std::cout << "|     index|First Name| Last Name| Nick Name|" << std::endl;
    while (i < index_contact)
    {
        firstname = phonebook[i].getFirstName();
        lastname = phonebook[i].getLastName();
        nickname = phonebook[i].getNickName();
        std::cout << "|" << std::setw(10) << i;
        std::cout << "|";
        std::cout << std::setw(10);
        field = (firstname.length() > MAX_WIDTH)
        ? erase_string(firstname) : firstname;
        std::cout << field;
        std::cout << "|";
        std::cout << std::setw(10);
        field = (lastname.length() > MAX_WIDTH)
        ? erase_string(lastname) : lastname;
        std::cout << field;
        std::cout << "|";
        std::cout << std::setw(10);
        field = (nickname.length() > MAX_WIDTH)
        ? erase_string(nickname) : nickname;
        std::cout << field;
        std::cout << "|" << std::endl;
        i++;
    }
    searchPhoneBook(phonebook, index_contact);
}