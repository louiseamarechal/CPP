#include "PmergeMe.hpp"

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

int myStoi( std::string number ) {

	int				    i;
	std::stringstream	ss(number);

	ss >> i;
	return (i);
}

std::vector<int>    parseArgsToVector( std::string argument ) {

    std::vector<int>    unsortedInts;
    // std::vector<int>            myInts;
    std::string         number;

    if (argument.empty())
        return (unsortedInts);

    for (std::string::iterator it = argument.begin(); it != argument.end(); it++)    
    {
        while (*it != 32)
        {
            number += *it;
            it++;
        }
        if (!number.empty())
            unsortedInts.push_back(myStoi(number));
        number.clear();
    }

    return (unsortedInts);
}

std::vector<std::vector<int> >   splitVectorInPairs( std::vector<int> unsortedInts ) {

    std::vector<std::vector<int> >   splittedVector;
    std::vector<int>                pairs;

    if (unsortedInts.empty())
        return (splittedVector);

    for (size_t i = 0; i < unsortedInts.size(); i++)
    {
        pairs.push_back(unsortedInts[i]);
        if (unsortedInts.size() % 2 != 0 && i == unsortedInts.size() - 1)
            break ;
            i++;
        }
        splittedVector.push_back(pairs);
        pairs.clear();
    }

    return (splittedVector);
}