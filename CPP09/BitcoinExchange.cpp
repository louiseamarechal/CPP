#include "BitcoinExchange.hpp"

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
		value = myStoi(line.substr(line.find(',', 0) + 1, line.find('\n', 0)));

		if (key != "date" && isDateOk(key))
			exchMap[key] = value;
	}

	return (exchMap);
}

std::string	findLastAvailableRate(std::map<std::string, float> exchMap, std::string date) {

	std::map<std::string, float>::iterator	it;

	for (it = exchMap.begin(); it != exchMap.end(); it++)
	{
		// std::cout << "it->first: " << it->first << " | date: " << date << std::endl;
		// std::cout << "it->first.compare(0, 8, date, 0, 8) = " << it->first.compare(0, 8, date, 0, 8) << std::endl;
		if (it->first.compare(0, 8, date, 0, 8) == 0)
		{
			std::cout << "We Made it !!" << std::endl;
			while (it->first.compare(date) != 0)
			{
				if (date[9] <= '9')
					date[9] -= 1;
				if (date[9] == '0')
				{
					if (date[8] == '1')
						date[8] = '0';
					else
						date[8] -= 1;
					date[9] = '9';
				}
			}
			return (date);
		}
	}
	return (NULL);
}

float	multiplyValues(std::string date, float bcValue, std::map<std::string, float> exchMap) {

	std::map<std::string, float>::iterator	it;

	for (it = exchMap.begin(); it != exchMap.end(); it++)
	{
		std::cout << "it->first: " << it->first << " | date: " << date << std::endl;
		if (it->first == date)
			return (bcValue * it->second);
	}

	date = findLastAvailableRate(exchMap, date);

	for (it = exchMap.begin(); it != exchMap.end(); it++)
	{
		if (it->first == date)
			return (bcValue * it->second);
	}

	return (-1);
}


void	getResult(std::map<std::string, float> exchMap, std::string file) {

	std::ifstream	ifs;
	float 			value;
	std::string		date;
	float			result;

	ifs.open(file, std::ifstream::in);

	if (!ifs.is_open())
	{
		std::cout << "Error: file can't be open !" << std::endl;
		return;
	}

	for( std::string line; std::getline(ifs, line);)
	{
		date = line.substr(0, line.find('|', 0) - 1);
		if (date != "date")
		{
			value = myStoi(line.substr(line.find('|', 0) + 2, line.find('\n', 0)));
			if (isValueOk(value) && isDateOk(date))
			{
				result = multiplyValues(date, value, exchMap);
				std::cout << date << " => " << value << " = " << result << std::endl;
			}
		}
	}

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
