#include <iostream>
#include <string>
#include <cstring>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	main(void)
{
	PhoneBook	repertoire;
	std::string	answer;


	while (answer != "EXIT")
	{
		std::cout << " Please enter ADD, SEARCH or EXIT" << std::endl;
		if (!std::getline(std::cin, answer))
			exit(1);
		if (answer == "ADD")
			repertoire.setContact();
		else if (answer == "SEARCH")
			repertoire.searchContact();
		else if (answer == "EXIT")
			break ;
	}
	return (0);
}
