/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:20:07 by louisea           #+#    #+#             */
/*   Updated: 2022/08/01 11:13:11 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <string>
#include <cstring>

Contact::Contact(void) {
	this._firstName = "";
	this._lastName = "";
	this._nickName = "";
	this._phoneNumber = "";
	this._darkestSecret = "";
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::setContact(void) {
	this.setFirstName();
	this.setLastName();
	this.setNickName();
	this.setPhoneNumber();
	this.setDarkestSecret();
}

void	Contact::_setFirstName(void) {

	std::string	firstName;

	std::cout << "First Name: " << std::endl;
	if (!std::getline(std::cin, firstName))
		exit(1);
	this._firstName = firstName;
}

void	Contact::_setLastName(void) {

	std::string	lastName;

	std::cout << "Last Name: " << std::endl;
	if (!std::getline(std::cin, lastName))
		exit(1);
	this._lastName = lastName;
}

void	Contact::_setNickName(void) {

	std::string	nickName;

	std::cout << "Nick Name: " << std::endl;
	if (!std::getline(std::cin, nickName))
		exit(1);
	this._nickName = nickName;
}

void	Contact::_setPhoneNumber(void) {

	std::string	phoneNumber;

	std::cout << "Phone Number: " << std::endl;
	if (!std::getline(std::cin, phoneNumber))
		exit(1);
	this._phoneNumber = phoneNumber;
}

void	Contact::_setDarkestSecret(void) {

	std::string	darkestSecret;

	std::cout << "Darkest Secret: " << std::endl;
	if (!std::getline(std::cin, darkestSecret))
		exit(1);
	this._darkestSecret = darkestSecret;
}

std::string	getFirstName(void) {
	return this.firstName;
}

std::string	getLastName(void) {
	return this.lastName;
}

std::string	getNickName(void) {
	return this.nickName;
}

std::string	getPhoneNumber(void) {
	return this.phoneNumber;
}

std::string	getDarkestSecret(void) {
	return this.darkestSecret;
}
