#include "BitcoinExchange.hpp"

int main( int argc, char **argv)
{
	(void) argv;
	if (argc != 2)
	{
		std::cout << "Please use the folllowing format : ./btc file.txt" << std::endl;
		return (1);
	}

	std::map<std::string, float>	exchMap = parseDatabase("data.csv");
	if (exchMap.empty())
	{
		std::cout << "Problem; while opening the file !" << std::endl;
		return (1);
	}

	getResult(exchMap, argv[1]);

	return (0);
}
