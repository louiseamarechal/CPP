#include "utils.hpp"

float    myStoi(std::string number)
{
	float				i;
	std::stringstream	ss(number);

	ss >> i;
	return (i);
}

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

	if ((myStoi(year) < 2009 || myStoi(year) > 2022) || (myStoi(month) < 1 || myStoi(month) > 12) || (myStoi(day) < 1 || myStoi(day) > 31))
	{
		std::cout << "Error: bad input => " << year << "-" << month << "-" << day << std::endl;
		return (false);
	}

	return (true);
}

bool	isValueOk(float value)
{
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
