#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::std::vector<char>	parseArgument( std::string argument );
bool					argumentFormatOk( std::string argument );
bool					isNumber( char c );
bool					isOperand( char c );
bool					noConsecutiveDigit( std::string str );
std::string				removeWhitespaces( std::string argument );
int						showResult( std::vector<char> argumentList );

#endif
