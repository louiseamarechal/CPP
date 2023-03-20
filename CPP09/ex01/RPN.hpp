#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <queue>
#include <sstream>

std::queue<char>      	parseArgument( std::string argument );
bool					argumentFormatOk( std::string argument );
bool					isNumber( char c );
bool					isOperator( char c );
bool					noConsecutiveDigit( std::string str );
std::string				removeWhitespaces( std::string argument );
void 					showResult( std::queue<char> argumentList );
void	                emptyQueue( std::queue<int> * myQueue );
int                     myCtoi(char c);
void	                doTheMath( std::queue<int> * numbers, char operators );


#endif
