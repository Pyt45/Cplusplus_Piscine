#include "ClassContact.hpp"

Contact::Contact(){ return ; }
Contact::~Contact(){ return ; }

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void	Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
}

void	Contact::setLogin(std::string login)
{
	this->_login = login;
}

void	Contact::setPostalAddress(std::string postalAddress)
{
	this->_postalAddress = postalAddress;
}

void	Contact::setEmailAddress(std::string emailAddress)
{
	this->_emailAddress = emailAddress;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void	Contact::setBirthdayDate(std::string birthdayDate)
{
	this->_birthdayDate = birthdayDate;
}

void	Contact::setFavoriteMeal(std::string favoriteMeal)
{
	this->_favoriteMeal = favoriteMeal;
}

void	Contact::setUnderwearColor(std::string underwearColor)
{
	this->_underwearColor = underwearColor;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
	return this->_firstName;
}

std::string Contact::getLastName()
{
	return this->_lastName;	
}

std::string Contact::getNickName()
{
	return this->_nickName;
}

std::string Contact::getLogin()
{
	return this->_login;
}

std::string Contact::getPostalAddress()
{
	return this->_postalAddress;
}

std::string Contact::getEmailAddress()
{
	return this->_emailAddress;
}

std::string Contact::getPhoneNumber()
{
	return this->_phoneNumber;
}

std::string Contact::getBirthdayDate()
{
	return this->_birthdayDate;
}

std::string Contact::getFavoriteMeal()
{
	return this->_favoriteMeal;
}

std::string Contact::getUnderwearColor()
{
	return this->_underwearColor;
}

std::string Contact::getDarkestSecret()
{
	return this->_darkestSecret;
}
