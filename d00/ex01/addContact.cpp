/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:35:31 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:35:34 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

Contact AddContact() {
	std::string input;
	Contact		contact;

	std::cout << "Enter FirstName: ";
	std::cin >> input;
	contact.setFirstName(input);

	std::cout << "Enter LastName: ";
	std::cin >> input;
	contact.setLastName(input);

	std::cout << "Enter NickName: ";
	std::cin >> input;
	contact.setNickName(input);

	std::cout << "Enter Login: ";
	std::cin >> input;
	contact.setLogin(input);

	std::cout << "Enter PostalAddress: ";
	std::cin >> input;
	contact.setPostalAddress(input);

	std::cout << "Enter EmailAddress: ";
	std::cin >> input;
	contact.setEmailAddress(input);

	std::cout << "Enter PhoneNumber: ";
	std::cin >> input;
	contact.setPhoneNumber(input);

	std::cout << "Enter BirthdayDate: ";
	std::cin >> input;
	contact.setBirthdayDate(input);

	std::cout << "Enter FavoriteMeal: ";
	std::cin >> input;
	contact.setFavoriteMeal(input);

	std::cout << "Enter UnderwearColor: ";
	std::cin >> input;
	contact.setUnderwearColor(input);

	std::cout << "Enter DarkestSecret: ";
	std::cin >> input;
	contact.setDarkestSecret(input);
	std::cout << "All Done and Saved to PhoneBook.. :)" << std::endl;
	return contact;
}