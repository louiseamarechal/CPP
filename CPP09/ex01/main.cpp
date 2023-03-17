#include "RPN.hpp"

int	main( int argc, char ** argv ) {

	if (argc != 2)
	{
		std::cout << "Error: please use the following format: ./RPN ''8 9 * 9 - 9 - 9 - 1 +'' ! " << std::endl;
		return (1);
	}

	// std::cout << argumentFormatOk(argv[1]) << std::endl;

	std::vector<char>	argumentList = parseArgument(argv[1]);

	if (argumentList.empty())
	{
		std::cout << "Error: Format not respected !" << std::endl;
		return (1);
	}

	std::cout << "MY LIST: " << std::endl;
	for (std::vector<char>::iterator it = argumentList.begin(); it != argumentList.end(); it++)
		std::cout << *it << std::endl;

	return (0);
}
