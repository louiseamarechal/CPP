/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:06:34 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/03 12:28:55 by louisea          ###   ########.fr       */
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

	std::cout << "Thanks for using your PhoneBook" << std::endl;
	return;
}

void	PhoneBook::addContact(void) {
	Contact	*c;

	c = &this->_contacts[this->_contactNumber % 8];
	c->setFirstName();
	c->setLastName();
	c->setNickName();
	c->setPhoneNumber();
	c->setDarkestSecret();
	this->_contactNumber++;
	std::cout << "Contact added !" << std::endl;
	std::cout << "You now have " << this->_contactNumber << " contact(s) saved !" << std::endl;
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
	while (index < this->_contactNumber)
	{
		firstName = this->_contacts[index].getFirstName();
		if (firstName.length() > 10)
			firstName = firstName.substr(0, 9).insert(9, ".");
		lastName = this->_contacts[index].getLastName();
		if (lastName.length() > 10)
			lastName = lastName.substr(0, 9).insert(9, ".");
		nickName = this->_contacts[index].getNickName();
		if (nickName.length() > 10)
			nickName = nickName.substr(0, 9).insert(9, ".");
		if (firstName[0] != '\0')
		{
			std::cout << index;
			std::cout << " | " <<  firstName;
			std::cout << " | " << lastName;
			std::cout << " | " << nickName << std::endl;
		}
		index++;
	}
}

void	PhoneBook::searchContact(void) {
	std::string	answer;

	if (this->_contacts[0].getFirstName() != "")
	{
		ContactShortList();
		std::cout << "Enter contact index to see details" << std::endl;
		if (!std::getline(std::cin, answer))
			exit(1);
		if (answer.length() == 1 && answer[0] >= '0' && answer[0] < '0' + this->_contactNumber)
			ContactDetails(stoi(answer, nullptr, 10));
		else
			std::cout << "Wrong input" << std::endl;
	}
	else
		std::cout << "You don't have any contacts yet !" << std::endl;
}
// void	PhoneBook::define_contact(void) {
//
// 	std::cout << "Define Contact called" << std::endl;
// 	return;
// }
