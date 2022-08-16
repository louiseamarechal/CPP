/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:20:07 by louisea           #+#    #+#             */
/*   Updated: 2022/08/12 13:02:38 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) : _firstName(""),
						_lastName(""),
						_nickName(""),
						_phoneNumber(""),
						_darkestSecret("") {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::setFirstName(void) {

	std::string	firstName;

	std::cout << "First Name: ";
	while (1)
	{
		if (!std::getline(std::cin, firstName))
			exit(1);
		if ((char)firstName[0] != '\0')
		{
			this->_firstName = firstName;
			break ;
		}
		std::cout << "Waiting for input: ";
	}
}

void	Contact::setLastName(void) {

	std::string	lastName;

	std::cout << "Last Name: ";
	while (1)
	{
		if (!std::getline(std::cin, lastName))
			exit(1);
		if ((char)lastName[0] != '\0')
		{
			this->_lastName = lastName;
			break ;
		}
		std::cout << "Waiting for input: ";
	}
}

void	Contact::setNickName(void) {

	std::string	nickName;

	std::cout << "Nick Name: ";
	while (1)
	{
		if (!std::getline(std::cin, nickName))
			exit(1);
		if ((char)nickName[0] != '\0')
		{
			this->_nickName = nickName;
			break ;
		}
		std::cout << "Waiting for input: ";
	}
}

void	Contact::setPhoneNumber(void) {

	std::string	phoneNumber;

	std::cout << "Phone Number: ";
	while (1)
	{
		if (!std::getline(std::cin, phoneNumber))
			exit(1);
		if ((char)phoneNumber[0] != '\0')
		{
			this->_phoneNumber = phoneNumber;
			break ;
		}
		std::cout << "Waiting for input: ";
	}
}

void	Contact::setDarkestSecret(void) {

	std::string	darkestSecret;

	std::cout << "Darkest Secret: ";
	while (1)
	{
		if (!std::getline(std::cin, darkestSecret))
			exit(1);
		if ((char)darkestSecret[0] != '\0')
		{
			this->_darkestSecret = darkestSecret;
			break ;
		}
		std::cout << "Waiting for input: ";
	}
}

std::string	Contact::getFirstName(void) const {
	return this->_firstName;
}

std::string	Contact::getLastName(void) const {
	return this->_lastName;
}

std::string	Contact::getNickName(void) const {
	return this->_nickName;
}

std::string	Contact::getPhoneNumber(void) const {
	return this->_phoneNumber;
}

std::string	Contact::getDarkestSecret(void) const {
	return this->_darkestSecret;
}
