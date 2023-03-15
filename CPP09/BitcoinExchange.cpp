#include "BitcoinExchange.hpp"

bool	isDateOk(std::string date)
{
	std::string				year;
	std::string				month;
	std::string				day;
	std::string::iterator	it;

	if (date.empty())
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}

	for (it = date.begin(); *it != '-'; it++)
		year += *it;
	date.erase(date.begin(), it + 1);
	for (it = date.begin(); *it != '-'; it++)
		month += *it;
	date.erase(date.begin(), it + 1);
	for (it = date.begin(); it != date.end(); it++)
		day += *it;

	if ((std::stoi(year) < 2009 || std::stoi(year) > 2022) || (std::stoi(month) < 1 || std::stoi(month) > 12) || (std::stoi(day) < 1 || std::stoi(day) > 31))
	{
		std::cout << "Error: bad input => " << year << "-" << month << "-" << day << std::endl;
		return (false);
	}

	return (true);
}

bool	isValueOk(std::string file, float value)
{
	if (file.empty())
		return (false);
	if (file == "data.csv")
		return (true);
	if (value < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (value > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}

std::map<std::string, float>	parseDatabase(std::string file) {

	std::ifstream					ifs;
	std::map<std::string, float>	exchMap;
	std::string						key;
	float 							value;

	ifs.open(file, std::ifstream::in);

	if (!ifs.is_open())
		return (exchMap);

	for( std::string line; std::getline(ifs, line);)
	{
			key = line.substr(0, line.find(',', 0));
			std::stringstream ss(line.substr(line.find(',', 0) + 1), line.find('\n', 0));
			ss >> value;

		if (key != "date" && isDateOk(key))
			exchMap[key] = value;
	}

	return (exchMap);
}

/***********************************************************************************************/
	// TO SEPARATE LINES OF .TXT FILE :
		// key = line.substr(0, line.find('|', 0) - 1);
		// std::stringstream ss(line.substr(line.find('|', 0) + 2), line.find('\n', 0));
		// ss >> value;

/***********************************************************************************************/

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
