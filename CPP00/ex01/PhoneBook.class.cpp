/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:06:34 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/16 16:29:30 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

// dans la classe PhoneBook je veux acceder a la fonction PhoneBook()
PhoneBook::PhoneBook( void ) : _contactNumber(0) {
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
}


void	PhoneBook::_contactDetails(int index) {
	if (index > 7)
	{
		std::cout << "Wrong input" << std::endl;
		return ;
	}
	std::cout << this->_contacts[index].getFirstName() << std::endl;
	std::cout << this->_contacts[index].getLastName() << std::endl;
	std::cout << this->_contacts[index].getNickName() << std::endl;
	std::cout << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << this->_contacts[index].getDarkestSecret() << std::endl;

}

void	PhoneBook::_contactShortList(void) {
	int			index;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;

	index = 0;
	while (index < this->_contactNumber && index < 8)
	{
		firstName = truncate(this->_contacts[index].getFirstName());
		lastName = truncate(this->_contacts[index].getLastName());
		nickName = truncate(this->_contacts[index].getNickName());
		if (firstName[0] != '\0')
		{
			std::cout << index << "|";
			std::cout << std::setw(10) << firstName << "|";
			std::cout << std::setw(10) << lastName << "|";
			std::cout << std::setw(10) << nickName << std::endl;
		}
		index++;
	}
}

void	PhoneBook::searchContact(void) {
	std::string	answer;

	if (this->_contacts[0].getFirstName() != "")
	{
		_contactShortList();
		std::cout << "Enter contact index to see details" << std::endl;
		if (!std::getline(std::cin, answer))
			exit(1);
		if (answer.length() == 1 && answer[0] >= '0' && answer[0] < '0' + this->_contactNumber)
			_contactDetails(std::atoi(answer.c_str()));
		else
			std::cout << "Wrong input" << std::endl;
	}
	else
		std::cout << "You don't have any contacts yet !" << std::endl;
}
