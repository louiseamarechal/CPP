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
    std::cout << "cleanArgs = " << cleanArgs << std::endl;
    
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

// 15 | 9 | 12 | 24 || 2 | 11 | 18
// 1- Diviser la suite de nombres en deux jusqu'a ce que je n'ai que 2 nombres a comparer -> mid = suite.size() / 2 => binary partition
// 2- Merge chaque subdivision (merge 2 ordered list)

void    merge(  std::vector<int> & unsortedInts, size_t frontIndex, size_t midIndex, size_t backIndex  ) {

    std::vector<int>    one;
    std::vector<int>    two;
    size_t              i;
    size_t              j;


    for (i = 0; i < midIndex - frontIndex + 1; i++)
        one.push_back(unsortedInts[i]);

    for (j = 0; j < backIndex - midIndex; j++)
        two.push_back(unsortedInts[i + j]);

    for (size_t x = 0; x < one.size(); x++)
        std::cout << two[x] << std::endl;
    
    for (size_t x = 0; x < one.size(); x++)
        std::cout << two[x] << std::endl;
}

void    mergeInsert( std::vector<int> unsortedInts, size_t frontIndex, size_t backIndex ) {
    
    if (frontIndex >= backIndex)
        return; // Returns recursivly

    size_t midIndex = frontIndex + (backIndex - frontIndex) / 2;

    std::cout << std::endl;
    std::cout << "frontIndex = " << frontIndex << std::endl;
    std::cout << "midIndex = " << midIndex << std::endl;
    std::cout << "backIndex = " << backIndex << std::endl;

    std::cout << std::endl;
    std::cout << "mergeInsert(unsortedInts, frontIndex, midIndex);" << std::endl;
    mergeInsert(unsortedInts, frontIndex, midIndex); // sorting first part of my vector (from index 0 to middle index -> and then reduce the middle index until I splitted my subvector to the minimun)
    mergeInsert(unsortedInts, midIndex + 1, backIndex); // here I am sorting the second part of my vector (from index middle to last index -> and then reduce the last index until I splitted my subvector to the minimun)
    merge(unsortedInts, frontIndex, midIndex, backIndex);
}



// std::vector<std::list<int> >   splitVectorInPairs( std::vector<int> unsortedInts ) {

//     std::vector<std::list<int> >   splittedList;
//     std::list<int>                pairs;

//     if (unsortedInts.empty())
//         return (splittedList);

//     for (size_t i = 0; i < unsortedInts.size(); i++)
//     {
//         for (int j = i; pairs.size() < 2; j++)
//         {
//             pairs.push_back(unsortedInts[j]);
//             if (unsortedInts.size() % 2 != 0 && i == unsortedInts.size() - 1)
//                 break ;
//         }
//         i++;
//         splittedList.push_back(pairs);
//         pairs.clear();
//     }

//     return (splittedList);
// }

// void    sort( std::list<int> & unsortedInts) {

//     int temp = 0;

//     if (unsortedInts.size() == 1)
//         return;

//     if (unsortedInts.front() > unsortedInts.back())
//     {
//         temp = unsortedInts.back();
//         unsortedInts.pop_back();
//         unsortedInts.push_back(unsortedInts.front());
//         unsortedInts.pop_front();
//         unsortedInts.push_front(temp);
//     }
// }

// std::list<int>    mergeInsert( std::vector<std::list<int> > splittedList ) {

//     std::list<int>    sortedInts;

//     for (size_t i = 0; i < splittedList.size(); i++)
//         sort(splittedList[i]);

//     for (size_t i = 0; i < splittedList.size() - 1; i++)
//     {
//         std::cout << splittedList[i].front() << " > " << splittedList[i + 1].front() << std::endl;
//         if (splittedList[i].front() > splittedList[i + 1].front())
//             sortedInts.push_back(splittedList[i].front());
//         sortedInts.push_front(splittedList[i].front());
//     }

//     // while (!sortedInts.empty())
//     // {
//     //     std::cout << sortedInts.front() << " ";
//     //     sortedInts.pop_front();
//     // }

//     return (sortedInts);
// }