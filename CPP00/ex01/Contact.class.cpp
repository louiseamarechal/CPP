/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:20:07 by louisea           #+#    #+#             */
/*   Updated: 2022/08/02 12:56:39 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
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

std::string	Contact::getFirstName(void) {
	return this->_firstName;
}

std::string	Contact::getLastName(void) {
	return this->_lastName;
}

std::string	Contact::getNickName(void) {
	return this->_nickName;
}

std::string	Contact::getPhoneNumber(void) {
	return this->_phoneNumber;
}

std::string	Contact::getDarkestSecret(void) {
	return this->_darkestSecret;
}
