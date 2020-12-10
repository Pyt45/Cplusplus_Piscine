#include "ClassContact.hpp"

contact::contact(void) {return ;}
contact::~contact(void) {return ;}


void        contact::setFirstName(std::string str)
{
    this->_firstName = str;
    return ;
}

void        contact::setLastName(std::string str)
{
    this->_lastName = str;
    return ;
}

void        contact::setNickName(std::string str)
{
    this->_nickName = str;
    return ;
}

void        contact::setLogin(std::string str)
{
    this->_login = str;
    return ;
}

void        contact::setPostalAddress(std::string str)
{
    this->_postalAddress = str;
    return ;
}

void        contact::setEmailAddress(std::string str)
{
    this->_emailAddress = str;
    return ;
}

void        contact::setPhoneNumber(std::string str)
{
    this->_phoneNumber = str;
    return ;
}

void        contact::setBirthdayDate(std::string str)
{
    this->_birthdayDate = str;
    return ;
}

void        contact::setFavoriteMeal(std::string str)
{
    this->_favoriteMeal = str;
    return ;
}
void        contact::setUnderWearColor(std::string str)
{
    this->_underwearColor = str;
    return ;
}

void        contact::setDarkestSecret(std::string str)
{
    this->_darkestSecret = str;
    return ;
}

std::string contact::getFirstName(void)
{
    return this->_firstName;
}

std::string contact::getLastName(void)
{
    return this->_lastName;
}

std::string contact::getNickName(void)
{
    return this->_nickName;
}

std::string contact::getLogin(void)
{
    return this->_login;
}

std::string contact::getPostalAddress(void)
{
    return this->_postalAddress;
}

std::string contact::getEmailAddress(void)
{
    return this->_emailAddress;
}

std::string contact::getPhoneNumber(void)
{
    return this->_phoneNumber;
}

std::string contact::getBirthdayDate(void)
{
    return this->_birthdayDate;
}

std::string contact::getFavoriteMeal(void)
{
    return this->_favoriteMeal;
}

std::string contact::getUnderWearColor(void)
{
    return this->_underwearColor;
}

std::string contact::getDarkestSecret(void)
{
    return this->_darkestSecret;
}