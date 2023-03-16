#include "BitcoinExchange.hpp"

int main( int argc, char **argv)
{
	(void) argv;
	if (argc != 2)
	{
		std::cout << "Please use the folllowing format : ./btc file.txt" << std::endl;
		return (1);
	}

	std::map<std::string, float>	exchMap = parseDatabase("testdata.csv");
	if (exchMap.empty())
	{
		std::cout << "Problem; while opening the file !" << std::endl;
		return (1);
	}

	// std::string date = findLastAvailableRate(exchMap, "2009-01-04");
	// std::cout << "Finale Date = " << date << std::endl;
	getResult(exchMap, argv[1]);
	// for (std::map<std::string, float>::iterator it = exchMap.begin(); it != exchMap.end(); it++)
	// 	std::cout << "exchMap[" << it->first << "] = " << it->second << std::endl;

	return (0);
}
