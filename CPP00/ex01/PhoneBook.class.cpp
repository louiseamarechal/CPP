/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:06:34 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/02 13:27:48 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

// dans la classe PhoneBook je veux acceder a la fonction PhoneBook()
PhoneBook::PhoneBook( void ) : _contactNumber(0) {

	// std::cout << "Constructor called" << std::endl;
	// this->contact = 42;
	// std::cout << "this->contact = " << this->contact << std::endl;
	// this->define_contact();

	return;
}

// dans la classe PhoneBook je veux acceder a la fonction ~PhoneBook()
PhoneBook::~PhoneBook( void ) {

	std::cout << "No more PhoneBook" << std::endl;
	return;
}

void	PhoneBook::setContact(void) {
	Contact	*c;

	c = &this->_contacts[this->_contactNumber % 8];
	c->setFirstName();
	c->setLastName();
	c->setNickName();
	c->setPhoneNumber();
	c->setDarkestSecret();
	this->_contactNumber++;
}


void	PhoneBook::ContactDetails(int index) {
	std::cout << this->_contacts[index].getFirstName() << std::endl;
	std::cout << this->_contacts[index].getLastName() << std::endl;
	std::cout << this->_contacts[index].getNickName() << std::endl;
	std::cout << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << this->_contacts[index].getDarkestSecret() << std::endl;

}

void	PhoneBook::ContactShortList(void) {
	int			index;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;

	index = 0;
	firstName = this->_contacts[index].getFirstName();
	if (firstName.length() > 10)
		firstName = firstName.substr(0, 9).insert(9, ".");
	lastName = this->_contacts[index].getLastName();
	if (lastName.length() > 10)
		lastName = lastName.substr(0, 9).insert(9, ".");
	nickName = this->_contacts[index].getNickName();
	if (nickName.length() > 10)
		nickName = nickName.substr(0, 9).insert(9, ".");
	while (index < 8)
	{
		std::cout << index;
		std::cout << " | " <<  firstName;
		std::cout << " | " << lastName;
		std::cout << " | " << nickName << std::endl;
		index++;
	}
}

void	PhoneBook::searchContact(void) {
	std::string	answer;

	ContactShortList();
	std::cout << "Enter contact index to see details" << std::endl;
	if (!std::getline(std::cin, answer))
		exit(1);
	if (stoi(answer, nullptr, 10) >= 0 && stoi(answer, nullptr, 10) < 8)
		ContactDetails(stoi(answer, nullptr, 10));
}
// void	PhoneBook::define_contact(void) {
//
// 	std::cout << "Define Contact called" << std::endl;
// 	return;
// }
