#include "ClassContact.hpp"

contact     addContact(void)
{
    contact     Contact;
    std::string buffer;

    std::cout << "First Name: ";
    std::cin >> buffer;
    Contact.setFirstName(buffer);

    std::cout << "Last Name: ";
    std::cin >> buffer;
    Contact.setLastName(buffer);

    std::cout << "Nick Name: ";
    std::cin >> buffer;
    Contact.setNickName(buffer);

    std::cout << "Login: ";
    std::cin >> buffer;
    Contact.setLogin(buffer);

    std::cout << "Postal Address: ";
    std::cin >> buffer;
    Contact.setPostalAddress(buffer);

    std::cout << "Email Address: ";
    std::cin >> buffer;
    Contact.setEmailAddress(buffer);

    std::cout << "Phone Number: ";
    std::cin >> buffer;
    Contact.setPhoneNumber(buffer);

    std::cout << "Birthday Date: ";
    std::cin >> buffer;
    Contact.setBirthdayDate(buffer);

    std::cout << "Favorite Meal: ";
    std::cin >> buffer;
    Contact.setFavoriteMeal(buffer);

    std::cout << "Underwear Color: ";
    std::cin >> buffer;
    Contact.setUnderWearColor(buffer);

    std::cout << "Darkest Secret: ";
    std::cin >> buffer;
    Contact.setDarkestSecret(buffer);
    std::cout << std::endl << "All Done and Saved to PhoneBook.. :)" << std::endl;
    return (Contact);
}