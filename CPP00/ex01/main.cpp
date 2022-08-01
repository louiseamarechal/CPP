#include <iostream>
#include <string>
#include <cstring>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	main(void)
{
	PhoneBook	repertoire;
	Contact		Contact;
	std::string	answer;

	std::cout << " Please enter ADD, SEARCH or EXIT" << std::endl;
	std::cin >> answer;

	if (strcoll(answer, "ADD") == 0)
		Contact::setContact();
	// else if (strcoll(answer, "SEARCH") == 0)
	// 	PhoneBook::displayContact();
	// else if (strcoll(answer, "EXIT") == 0)
	// 	return (1);
	// std::cout << answer << std::endl;
	// answer.c_str();
	// answer.c_str();
	// instance.contact = 10;
	// std::cout << "Instance.contact: " << instance.contact << std::endl;
	//
	// instance.define_contact();

	return (0);
}
