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
    std::list<int>              liOne;
    std::list<int>              liTwo;
    // std::list<int>::iterator    it = unsortedInts.begin();
    // int                         temp;

    (void)midIndex;
    (void)backIndex;

    for (size_t x = 0; x < oneSize; x++)
    {
        liOne.push_back(*it);
        it++;
    }

    for (size_t y = 0; y < twoSize; y++)
    {
        liTwo.push_back(*it);
        it++;
    }

    if (liOne.size() == 1 && liTwo.size() == 1)
    {
        if (liOne.front() > liTwo.front())
        {
            unsortedInts.pop_front();
            unsortedInts.insert(it++, liOne.front());
        }
    }


    // for (std::list<int>::iterator it = unsortedInts.begin(); it != unsortedInts.end(); it++)
    //     std::cout << *it << " ";

    // std::cout << std::endl;

    std::cout << "List One: ";
    for (std::list<int>::iterator it = liOne.begin(); it != liOne.end(); it++)
        std::cout << *it << " ";

    std::cout << "List Two: ";
    for (std::list<int>::iterator it = liTwo.begin(); it != liTwo.end(); it++)
        std::cout << *it << " ";
    
    // for (size_t x = 0; x < oneSize; x++)
    // {
    //     if (oneSize > 1)
    //     {
    //         for (size_t y = x + 1; y < oneSize; y++)
    //         {
    //             if ((*it) + frontIndex + y < (*it) + frontIndex + x)
    //             {
    //                 temp = (*it) + frontIndex + y;
    //                 // it + (frontIndex + y)  = *it + (frontIndex + x);
    //                 // unsortedInts[frontIndex + x] = temp;
    //             }
    //         }
    //     }
    // }
    
    // for (size_t x = 0; x < twoSize; x++)
    // {
    //     if (twoSize > 1)
    //     {
    //         for (size_t y = x + 1; y < twoSize; y++)
    //         {
    //             if (unsortedInts[midIndex + 1 + y] < unsortedInts[midIndex + 1 + x])
    //             {
    //                 temp = unsortedInts[midIndex + 1 + y];
    //                 unsortedInts[midIndex + 1 + y] = unsortedInts[midIndex + 1 + x];
    //                 unsortedInts[midIndex + 1 + x] = temp;
    //             }
    //         }
    //     }
    // }

    // std::vector<int>::iterator  vec = unsortedInts.begin() + frontIndex;
    // std::vector<int>::iterator  insert = unsortedInts.begin() + midIndex + 1;
    // std::vector<int>::iterator  stop = unsortedInts.begin() + backIndex + 1;

    // while (insert != stop)
    // {
    //     if (vec == insert)
    //         break;
    //     stop = unsortedInts.begin() + backIndex + 1;
    //     if (*vec <= *insert) // insert > a li donc je l'insert pas
    //         vec++;
    //     else if (*vec > *insert)
    //     {
    //         vec = unsortedInts.insert(vec, *insert) + 1;
    //         insert = unsortedInts.erase(insert + 1); // erase returns iterator following the one removed;
    //     }
    // }
}

void    mergeInsertList( std::list<int>& unsortedInts, size_t frontIndex, size_t backIndex ) {
    
    if (frontIndex >= backIndex)
        return; // Returns recursivly

    size_t midIndex = frontIndex + (backIndex - frontIndex) / 2;

    mergeInsertList(unsortedInts, frontIndex, midIndex);
    mergeInsertList(unsortedInts, midIndex + 1, backIndex);
    mergeList(unsortedInts, frontIndex, midIndex, backIndex);
}