#include "RPN.hpp"

bool isOperand( char c )
{
	if (c == '*' || c == '+' || c == '-' || c == '/')
		return (true);
	return (false);
}

bool	isNumber( char c )
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

bool	noConsecutiveDigit( std::string str ) {

	int n = str.size();
	int consecutiveDigits = 0;
	int consecutiveSymbols = 0;

	if (n == 0)
		return false;

	if (isOperand(str[0]))
		return false;
	if (!isOperand(str[n - 1]))
		return false;

	for (int i = 0; i < n; i++)
	{
		while (isNumber(str[i]))
		{
			consecutiveDigits++;
			consecutiveSymbols = 0;
			if (consecutiveDigits > 2)
				return false;
		}
		else if (isOperand(str[i]))
		{
			consecutiveSymbols++;
			consecutiveDigits = 0;
			if (consecutiveSymbols > 2)
				return false;
		}
	}
	return true;
}

bool	argumentFormatOk( std::string str ) {

	size_t		n = str.size();

	if (n == 0)
		return (false);

	for (size_t i = 0; i < n; i++)
	{
		if (!isNumber(str[i]) && !isOperand(str[i]) && str[i] != 32)
			return (false);
	}

	std::cout << "removeWhitespaces(str) = " << removeWhitespaces(str) << std::endl;

	if (!noConsecutiveDigit(removeWhitespaces(str)))
		return (false);

	return (true);
}

std::string	removeWhitespaces( std::string argument ) {

	std::string::iterator	it;

	for (it = argument.begin(); it != argument.end(); it++)
	{
		if (*it == 32)
		{
			argument.erase(it);
			it--;
		}
	}

	return (argument);
}

std::vector<char>	parseArgument( std::string argument ) {

	std::vector<char>		argumentList;
	std::string::iterator	it;
	std::string				noWhitespace;

	if (argument.empty())
		return (argumentList);

	if (!argumentFormatOk(argument))
		return (argumentList);

	noWhitespace = removeWhitespaces(argument);

	for (size_t i = 0; i < noWhitespace.size(); i++)
		argumentList.push_back(noWhitespace[i]);

	return (argumentList);
}

int	doTheMath( std::vector<int> numbers, std::vector<char> operands, int result ) {

	int	temp;

	if (operands.size() == 2 && numbers.size() == 2)
	{
		if (operands[0] == '+')
			temp = numbers[0] + numbers[1];
		else if (operands[0] == '-')
			temp = numbers[0] - numbers[1];
		else if (operands[0] == '*')
			temp = numbers[0] * numbers[1];
		else if (operands[0] == '/')
			temp = numbers[0] / numbers[1];

		if (operands[1] == '+')
			result += temp;
		else if (operands[1] == '-')
			result -= temp;
		else if (operands[1] == '*')
			result *= temp;
		else if (operands[1] == '/')
			result /= temp;
		// result operands[1]= numbers[0] operands[0] numbers[1]
	}

	if (operands[0] == '+')
		result += temp;
	else if (operands[0] == '-')
		result -= temp;
	else if (operands[0] == '*')
		result *= temp;
	else if (operands[0] == '/')
		result /= temp;

	return (result);
}

void	showResult( std::vector<char> argumentList ) {

	std::vector<int>	numbers;
	std::vector<char>	operands;

	for (size_t i = 0; i < argumentList.size(); i++)
	{
		while (isNumber(argumentList[i]))
		{
			numbers.push_back(argumentList[i]);
			i++;
		}
		while (isOperand(argumentList[i]))
		{
			operands.push_back(argumentList[i]);
			i++;
		}
		if (numbers.size() == 2 && operands.size() != 2)
			return (NULL);
		result = doTheMath(numbers, operands, result);
	}

	return (result);
}

// 1. Parser la suite numerique envoyee en argument
//		- format has to be betzeen " "
//		- check that values are numbers < 10 or + - / *
//		- you cannot have more than 2 consecutives numbers

// 2. Add numbers as char in the list

// 3. Iterate through the list and do the maths !
