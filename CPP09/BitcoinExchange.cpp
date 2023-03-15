#include "BitcoinExchange.hpp"

std::map<std::string, float>	parseDatabase(std::ifstream ifs) {

	std::string		line;

	for( line, std::getline(ifs, line))
		std::cout << line << std::endl;
}

// 1. Parse the Exchange Rate file
//		- Check that the data are correct
//				Month from 1-12m Days 1-31 Year not above 2022
// 		- Create a Map with Dates as key and rate as value

// 2. Parse the Bitcoin Value file
// 		- check dates are correct + value are between 0-1000 (can be float or positive int)
// 		- create Map with Dates as key and bc value as value

// 3. For each Date in the BCValue Map check if it is in the Exchange rate map
//		- if it is get the value and multiply it by the Exmap value and return result
// 		- it is not, do a loop where you decrease the day by 1 at each iteration and check if the date is in the Exmap
// 			when you find the good date multiply the value and return result
