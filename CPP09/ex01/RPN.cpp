#include "RPN.hpp"

bool isOperator( char c )
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

	if (isOperator(str[0]))
		return false;
	if (!isOperator(str[n - 1]))
		return false;

	for (int i = 0; i < n; i++)
	{
		if (isNumber(str[i]))
		{
			consecutiveDigits++;
			consecutiveSymbols = 0;
			if (consecutiveDigits > 3)
				return false;
		}
		else if (isOperator(str[i]))
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
		if (!isNumber(str[i]) && !isOperator(str[i]) && str[i] != 32)
			return (false);
	}

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

std::queue<char>	parseArgument( std::string argument ) {

	std::queue<char>		argumentQueue;
	std::string::iterator	it;
	std::string				noWhitespace;

	if (argument.empty())
		return (argumentQueue);

	if (!argumentFormatOk(argument))
		return (argumentQueue);

	noWhitespace = removeWhitespaces(argument);

	for (size_t i = 0; i < noWhitespace.size(); i++)
		argumentQueue.push(noWhitespace[i]);

	return (argumentQueue);
}

int    myCtoi(char c)
{
	return (c - '0');
}

void	doTheMath( std::queue<int> * numbers, char operators ) {

	int		result = 0;
	int		temp;
	std::queue<int>	total;

	if (numbers->size() == 3)
	{
		total.push(numbers->front());
		numbers->pop();
	}

	temp = numbers->front();
	numbers->pop();

	if (operators == '+')
		result = temp + numbers->front();
	else if (operators == '-')
		result = temp - numbers->front();
	else if (operators == '*')
		result = temp * numbers->front();
	else if (operators == '/')
		result = temp / numbers->front();

	numbers->pop();
	
	if (!total.empty())
	{
		numbers->push(total.front());
		total.pop();
	}
	numbers->push(result);
}

void	emptyQueue( std::queue<int> * myQueue ) {

	size_t	size = myQueue->size();
	for (size_t i = 0; i < size; i++)
		myQueue->pop();
}

void	showResult( std::queue<char> argumentQueue ) {

	std::queue<int>	numbers;
	size_t	argumenSize = argumentQueue.size();

	for (size_t i = 0; i < argumenSize; i++)
	{
		while (isNumber(argumentQueue.front()))
		{
			numbers.push(myCtoi(argumentQueue.front()));
			argumentQueue.pop();
		}

		if (isOperator(argumentQueue.front()))
		{
			if (numbers.size() <= 1)
			{
				std::cout << "Error: Format not respected !" << std::endl;
				return;
			}
			doTheMath(&numbers, argumentQueue.front());
			argumentQueue.pop();
		}

	}
	if (numbers.size() > 1)
	{
		std::cout << "Error: Format not respected !" << std::endl;
		return;
	}
	std::cout << numbers.front() << std::endl;
}