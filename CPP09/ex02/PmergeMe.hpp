#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <sstream>

std::string                     removeWhitespaces( std::string argument );
int                             myStoi( std::string number );
std::vector<int>                parseArgsToVector( std::string argument );
std::vector<std::vector<int> >   splitVectorInPairs( std::vector<int> unsortedInts );

#endif