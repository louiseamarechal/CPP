#include <iostream>
#include <string>
#include <cstring>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	main(void)
{
	PhoneBook	repertoire;
	std::string	answer;


	while (1)
	{
		std::cout << " Please enter ADD, SEARCH or EXIT" << std::endl;
		if (!std::getline(std::cin, answer))
			exit(1);
		if (answer == "ADD")
			repertoire.setContact();
		else if (answer == "SEARCH")
		// {
		// 	repertoire.ContactShortList();
		// 	std::cout << "Enter contact index to see details" << std::endl;
		// 	if (!std::getline(std::cin, answer))
		// 		exit(1);
		// 	if (stoi(answer, nullptr, 10) >= 0 && stoi(answer, nullptr, 10) < 8)
		// 		repertoire.maContactDetails(stoi(answer, nullptr, 10));
		// }
			repertoire.searchContact();
		else if (answer == "EXIT")
			break ;
	}
	return (0);
}
