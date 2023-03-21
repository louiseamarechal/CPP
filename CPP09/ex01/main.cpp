#include "RPN.hpp"

int	main( int argc, char ** argv ) {

	if (argc != 2)
	{
		std::cout << "Error: please use the following format: ./RPN ''8 9 * 9 - 9 - 9 - 1 +'' ! " << std::endl;
		return (1);
	}

	reversPolishNotationCalculation(argv[1]);

	return (0);
}
