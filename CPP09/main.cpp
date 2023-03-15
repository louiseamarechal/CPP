#include "BitcoinExchange.hpp"

int main( int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Please use the folllowing format : ./btc file.txt" << std::endl;
		return;
	}

	std::ifstream	ifs;

	ifs.open("data.csv", in);

	if (!ifs.is_open())
	{
		std::cout << "Proble; while opening the file !" << std::endl;
		return;
	}
	parseDatabase(ifs);
}
