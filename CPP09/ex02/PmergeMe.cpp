#include "PmergeMe.hpp"

std::string removeConsecutiveWhitespace( std::string buffer ) {

    char                    whitespace = 32;
    std::string             result;
    std::string::iterator   it = buffer.begin();
    
    if (buffer.empty())
        return (buffer);

    while ( *it == whitespace )
        buffer.erase(it);

    for (it = buffer.begin(); it != buffer.end(); ++it)
    {
        if (*it == whitespace && (it + 1) != buffer.end() && *(it + 1) == whitespace)
            continue;

        result += *it; 
    }

    if (!result.empty() && result[result.size() - 1] == whitespace)
        result.erase(result.size() - 1);

    return result;
}


int myStoi( std::string number ) {

	int				    i;
	std::stringstream	ss(number);

	ss >> i;
	return (i);
}

std::vector<int>    parseArgsToVector( std::string argument ) {

    std::vector<int>      unsortedInts;
    std::string         cleanArgs;
    std::string         numbers;
    size_t              pos;

    if (argument.empty())
        return (unsortedInts);

    cleanArgs = removeConsecutiveWhitespace(argument);
    
    while (!cleanArgs.empty())
    {
        pos = cleanArgs.find(" ") + 1;
        if (cleanArgs.find(" ") == std::string::npos)
            pos = cleanArgs.find('\n' + 1);
        numbers = cleanArgs.substr(0, pos - 1);
        cleanArgs.erase(0, pos);
        unsortedInts.push_back(myStoi(numbers));
        numbers.clear();
    }

    return (unsortedInts);
}

void    sortVector( std::vector<int> & unsortedInts,size_t index, size_t size ) {

    int                 temp;

    for (size_t x = 0; x < size; x++)
    {
        if (size > 1)
        {
            for (size_t y = x + 1; y < size; y++)
            {
                if (unsortedInts[index + y] < unsortedInts[index + x])
                {
                    temp = unsortedInts[index + y];
                    unsortedInts[index + y] = unsortedInts[index + x];
                    unsortedInts[index + x] = temp;
                }
            }
        }
    }
}

void    mergeVector( std::vector<int> & unsortedInts, size_t frontIndex, size_t midIndex, size_t backIndex ) {

    size_t  oneSize = (midIndex - frontIndex) + 1;
    size_t  twoSize = backIndex - midIndex;

    sortVector(unsortedInts, frontIndex, oneSize);
    sortVector(unsortedInts, midIndex + 1, twoSize);

    std::vector<int>::iterator  vec = unsortedInts.begin() + frontIndex;
    std::vector<int>::iterator  insert = unsortedInts.begin() + midIndex + 1;
    std::vector<int>::iterator  stop = unsortedInts.begin() + backIndex + 1;

    while (insert != stop)
    {
        if (vec == insert)
            break;
        stop = unsortedInts.begin() + backIndex + 1;
        if (*vec <= *insert) // insert > a li donc je l'insert pas
            vec++;
        else if (*vec > *insert)
        {
            vec = unsortedInts.insert(vec, *insert) + 1;
            insert = unsortedInts.erase(insert + 1); // erase returns iterator following the one removed;
        }
    }
}

void    mergeInsertVector( std::vector<int>& unsortedInts, size_t frontIndex, size_t backIndex ) {
    
    if (frontIndex >= backIndex)
        return; // Returns recursivly

    size_t midIndex = frontIndex + (backIndex - frontIndex) / 2;

    mergeInsertVector(unsortedInts, frontIndex, midIndex);
    mergeInsertVector(unsortedInts, midIndex + 1, backIndex);
    mergeVector(unsortedInts, frontIndex, midIndex, backIndex);
}

std::list<int>    parseArgsToList( std::string argument ) {

    std::list<int>      unsortedInts;
    std::string         cleanArgs;
    std::string         numbers;
    size_t              pos;

    if (argument.empty())
        return (unsortedInts);

    cleanArgs = removeConsecutiveWhitespace(argument);
    
    while (!cleanArgs.empty())
    {
        pos = cleanArgs.find(" ") + 1;
        if (cleanArgs.find(" ") == std::string::npos)
            pos = cleanArgs.find('\n' + 1);
        numbers = cleanArgs.substr(0, pos - 1);
        cleanArgs.erase(0, pos);
        unsortedInts.push_back(myStoi(numbers));
        numbers.clear();
    }

    return (unsortedInts);

}

void    sortList( std::list<int> & unsortedInts, size_t index, size_t size ) {

    std::list<int>::iterator    it = unsortedInts.begin();
    std::list<int>::iterator    itNext = unsortedInts.begin();
    int                         temp;

    std::advance(it, index);
    std::advance(itNext, index + 1);


    if (size <= 1)
        return;
    for (size_t x = 0; x < size; x++)
    {
        for (size_t y = x + 1; y < size; y++)
        {
            if (*itNext < *it)
            {
                temp = *itNext;
                *itNext = *it;
                *it = temp;
            }
            itNext++;
        }
    }
}

void    mergeList( std::list<int> & unsortedInts, size_t frontIndex, size_t midIndex, size_t backIndex ) {

    size_t  oneSize = (midIndex - frontIndex) + 1;
    size_t  twoSize = backIndex - midIndex;

    sortList(unsortedInts, frontIndex, oneSize);
    sortList(unsortedInts, midIndex + 1, twoSize);

    std::list<int>::iterator  list = unsortedInts.begin();
    std::list<int>::iterator  insert = unsortedInts.begin();
    std::list<int>::iterator  stop = unsortedInts.begin();

    std::advance(list, frontIndex);
    std::advance(insert, midIndex + 1);
    std::advance(stop, backIndex + 1);

    while (insert != stop)
    {
        if (list == insert)
            break;
        if (*list <= *insert) // insert > a li donc je l'insert pas
            list++;
        else if (*list > *insert)
        {
            unsortedInts.insert(list, *insert);
            insert = unsortedInts.erase(insert); // erase returns iterator following the one removed;
        }
    }
}

void    mergeInsertList( std::list<int>& unsortedInts, size_t frontIndex, size_t backIndex ) {
    
    if (frontIndex >= backIndex)
        return; // Returns recursivly

    size_t midIndex = frontIndex + (backIndex - frontIndex) / 2;

    mergeInsertList(unsortedInts, frontIndex, midIndex);
    mergeInsertList(unsortedInts, midIndex + 1, backIndex);
    mergeList(unsortedInts, frontIndex, midIndex, backIndex);
}