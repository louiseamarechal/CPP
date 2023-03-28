#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <sstream>
#include <iterator>

std::string                     removeConsecutiveWhitespace( std::string buffer );
int                             myStoi( std::string number );
std::vector<int>                parseArgsToVector( std::string argument );
std::list<int>                  parseArgsToList( std::string argument );
void                            mergeInsertVector( std::vector<int>& unsortedInts, size_t frontIndex, size_t backIndex );
void                            mergeInsertList( std::list<int>& unsortedInts, size_t frontIndex, size_t backIndex );
#endif