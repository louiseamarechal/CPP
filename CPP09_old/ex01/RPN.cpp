#include "RPN.hpp"

static bool isOperator( char c )
{
	if (c == '*' || c == '+' || c == '-' || c == '/')
		return (true);
	return (false);
}

static bool	isNumber( char c )
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

static bool	argumentFormatOk( std::string str ) {

	size_t		n = str.size();

	if (n == 0)
		return (false);

	for (size_t i = 0; i < n; i++)
	{
		if (!isNumber(str[i]) && !isOperator(str[i]) && str[i] != 32)
			return (false);
	}

	return (true);
}

static std::string	removeWhitespaces( std::string argument ) {

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

static int    myCtoi(char c)
{
	return (c - '0');
}

static void	doTheMath( std::stack<int> & numbers, char operators ) {

	int		result = 0;
	int		temp;

	temp = numbers.top();
	numbers.pop();

	if (operators == '+')
		result = numbers.top() + temp;
	else if (operators == '-')
		result = numbers.top() - temp;
	else if (operators == '*')
		result = numbers.top() * temp;
	else if (operators == '/')
		result = numbers.top() / temp;

	numbers.pop();
	
	numbers.push(result);
}

void	reversPolishNotationCalculation( std::string argument ) {

	std::stack<int>			numbers;
	std::string::iterator	it;
	std::string				noWhitespace;

	if (argument.empty() || !argumentFormatOk(argument))
	{
		std::cout << "Error: Format not respected !" << std::endl;
		return;
	}

	noWhitespace = removeWhitespaces(argument);

	for (size_t i = 0; i <= noWhitespace.size(); i++)
	{
		for (; isNumber(noWhitespace[i]); i++)
			numbers.push(myCtoi(noWhitespace[i]));
		if (isOperator(noWhitespace[i]))
		{
			if (numbers.size() < 2)
			{
				std::cout << "Error: Format not respected !" << std::endl;
				return;
			}
			doTheMath(numbers, noWhitespace[i]);
		}
	}

	if (numbers.size() > 1)
	{
		std::cout << "Error: Format not respected !" << std::endl;
		return;
	}
	std::cout << numbers.top() << std::endl;
}
