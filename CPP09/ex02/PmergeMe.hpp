#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <sstream>

std::string                     removeConsecutiveWhitespace( std::string buffer );
int                             myStoi( std::string number );
std::vector<int>                parseArgsToVector( std::string argument );
// std::vector<std::list<int> >    splitVectorInPairs( std::vector<int> unsortedInts );
void                            mergeInsert( std::vector<int> unsortedInts, size_t frontIndex, size_t backIndex );
#endif