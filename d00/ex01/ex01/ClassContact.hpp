#ifndef CLASS_CONTACT_HPP
# define CLASS_CONTACT_HPP

# include <iostream>
# include <cctype>
# include <iomanip>

const int MAX_CONTACT = 2;
const int MAX_FIELD = 10;

class Contact {
	public:
		Contact();
		void			setFirstName(std::string firstName);
		void			setLastName(std::string lastName);
		void			setNickName(std::string nickName);
		void			setLogin(std::string login);
		void			setPostalAddress(std::string postalAddress);
		void			setEmailAddress(std::string emailAddress);
		void			setPhoneNumber(std::string phoneNumber);
		void			setBirthdayDate(std::string birthdayDate);
		void			setFavoriteMeal(std::string favoriteMeal);
		void			setUnderwearColor(std::string underwearColor);
		void			setDarkestSecret(std::string darkestSecret);

		std::string		getFirstName();
		std::string		getLastName();
		std::string		getNickName();
		std::string		getLogin();
		std::string		getPostalAddress();
		std::string		getEmailAddress();
		std::string		getPhoneNumber();
		std::string		getBirthdayDate();
		std::string		getFavoriteMeal();
		std::string		getUnderwearColor();
		std::string		getDarkestSecret();

		~Contact();
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

void		PrintPhoneBook(Contact phonebook[], int index);
Contact		AddContact();

#endif