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

void    mergeVector( std::vector<int> & unsortedInts, size_t frontIndex, size_t midIndex, size_t backIndex ) {

    size_t              oneSize = (midIndex - frontIndex) + 1;
    size_t              twoSize = backIndex - midIndex;
    int                 temp;

    for (size_t x = 0; x < oneSize; x++)
    {
        if (oneSize > 1)
        {
            for (size_t y = x + 1; y < oneSize; y++)
            {
                if (unsortedInts[frontIndex + y] < unsortedInts[frontIndex + x])
                {
                    temp = unsortedInts[frontIndex + y];
                    unsortedInts[frontIndex + y] = unsortedInts[frontIndex + x];
                    unsortedInts[frontIndex + x] = temp;
                }
            }
        }
    }
    
    for (size_t x = 0; x < twoSize; x++)
    {
        if (twoSize > 1)
        {
            for (size_t y = x + 1; y < twoSize; y++)
            {
                if (unsortedInts[midIndex + 1 + y] < unsortedInts[midIndex + 1 + x])
                {
                    temp = unsortedInts[midIndex + 1 + y];
                    unsortedInts[midIndex + 1 + y] = unsortedInts[midIndex + 1 + x];
                    unsortedInts[midIndex + 1 + x] = temp;
                }
            }
        }
    }

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

void    mergeList( std::list<int> & unsortedInts, size_t frontIndex, size_t midIndex, size_t backIndex ) {

    size_t                      oneSize = (midIndex - frontIndex) + 1;
    size_t                      twoSize = backIndex - midIndex;
    std::list<int>::iterator    it = unsortedInts.begin();
    std::vector<int>              vecOne;
    std::vector<int>              vecTwo;
    int                         temp;
    size_t                      x;
    size_t                      y;

    for ( x = 0; x < oneSize; x++)
    {
        vecOne.push_back(*it);
        it++;
    }

    for (y = 0; y < twoSize; y++)
    {
        vecTwo.push_back(*it);
        it++;
    }

    for (x = 0; x < oneSize; x++)
    {
        if (oneSize > 1)
        {
            for (y = x + 1; y < oneSize; y++)
            {
                if (vecOne[x] > vecOne[y])
                {
                    temp = vecOne[y];
                    vecOne[y] = vecOne[x];
                    vecOne[x] = temp;
                }
            }
        }
    }

    for (x = 0; x < twoSize; x++)
    {
        if (twoSize > 1)
        {
            for (y = x + 1; y < twoSize; y++)
            {
                if (vecTwo[x] > vecTwo[y])
                {
                    temp = vecTwo[y];
                    vecTwo[y] = vecTwo[x];
                    vecTwo[x] = temp;
                }
            }
        }
    }

    if (oneSize > 1 && twoSize > 1)
    {
        for (x = 0; x < (oneSize + twoSize); x++)
            unsortedInts.pop_front();
        for (int j = twoSize - 1; j >= 0; j--)
            unsortedInts.push_front(vecTwo[j]);
        for (int j = oneSize - 1; j >= 0; j--)
            unsortedInts.push_front(vecOne[j]);
    }
    else if (oneSize > 1 && twoSize < 2)
    {
        for (x = 0; x < oneSize; x++)
            unsortedInts.pop_front();
        for (int j = oneSize - 1; j >= 0; j--)
            unsortedInts.push_front(vecOne[j]);
    }

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