#ifndef CLASS_CONTACT_HPP
# define CLASS_CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

const int MAX_CONTACT = 8;
const int MAX_WIDTH = 10;

class contact
{
	public:
		contact(void);
		~contact(void);
		void			setFirstName(std::string);
		void			setLastName(std::string);
		void			setNickName(std::string);
		void			setLogin(std::string);
		void			setPostalAddress(std::string);
		void			setEmailAddress(std::string);
		void			setPhoneNumber(std::string);
		void			setBirthdayDate(std::string);
		void			setFavoriteMeal(std::string);
		void			setUnderWearColor(std::string);
		void			setDarkestSecret(std::string);

		std::string		getFirstName(void);
		std::string		getLastName(void);
		std::string		getNickName(void);
		std::string		getLogin(void);
		std::string		getPostalAddress(void);
		std::string		getEmailAddress(void);
		std::string		getPhoneNumber(void);
		std::string		getBirthdayDate(void);
		std::string		getFavoriteMeal(void);
		std::string		getUnderWearColor(void);
		std::string		getDarkestSecret(void);
	private:
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickName;
		std::string		_login;
		std::string		_postalAddress;
		std::string		_emailAddress;
		std::string		_phoneNumber;
		std::string		_birthdayDate;
		std::string		_favoriteMeal;
		std::string		_underwearColor;
		std::string		_darkestSecret;
};

contact					addContact(void);
void					PrintPhoneBook(contact phoneBook[], int index_contact);

#endif