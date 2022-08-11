/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:20:07 by louisea           #+#    #+#             */
/*   Updated: 2022/08/11 16:39:16 by lmarecha         ###   ########.fr       */
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

	std::cout << "First Name: " << std::endl;
	if (!std::getline(std::cin, firstName))
		exit(1);
	this->_firstName = firstName;
}

void	Contact::setLastName(void) {

	std::string	lastName;

	std::cout << "Last Name: " << std::endl;
	if (!std::getline(std::cin, lastName))
		exit(1);
	this->_lastName = lastName;
}

void	Contact::setNickName(void) {

	std::string	nickName;

	std::cout << "Nick Name: " << std::endl;
	if (!std::getline(std::cin, nickName))
		exit(1);
	this->_nickName = nickName;
}

void	Contact::setPhoneNumber(void) {

	std::string	phoneNumber;

	std::cout << "Phone Number: " << std::endl;
	if (!std::getline(std::cin, phoneNumber))
		exit(1);
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(void) {

	std::string	darkestSecret;

	std::cout << "Darkest Secret: " << std::endl;
	if (!std::getline(std::cin, darkestSecret))
		exit(1);
	this->_darkestSecret = darkestSecret;
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
