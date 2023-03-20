#include "RPN.hpp"

int	main( int argc, char ** argv ) {

	if (argc != 2)
	{
		std::cout << "Error: please use the following format: ./RPN ''8 9 * 9 - 9 - 9 - 1 +'' ! " << std::endl;
		return (1);
	}

	std::queue<char>	arguments = parseArgument(argv[1]);

	if (arguments.empty())
	{
		std::cout << "Error: Format not respected !" << std::endl;
		return (1);
	}

	showResult(arguments);

	return (0);
}
