#include "PmergeMe.hpp"

int main( int argc, char **argv ) {

    if (argc < 2)
    {
        std::cout << "Error: incorrect format !" << std::endl;
        return (1);
    }

    std::string         argument;
    clock_t             t;

    for (int i = 1; i < argc; i++)
        argument += argv[i];

    std::vector<int>    unsortedVector = parseArgsToVector(argument);
    std::list<int>      unsortedList = parseArgsToList(argument);

    if (unsortedVector.empty())
    {
        std::cout << "Error: not enough parameters !" << std::endl;
        return (1);
    }

    std::cout << "Before: ";
    for (size_t i = 0; i < unsortedVector.size(); i++)
        std::cout << unsortedVector[i] << " ";

    std::cout << std::endl;
    unsortedVector.reserve(unsortedVector.capacity() + 1);

    t = clock();
    mergeInsertVector(unsortedVector, 0, unsortedVector.size() - 1);
    t = clock() - t;

    std::cout << "After: ";
    for (size_t i = 0; i < unsortedVector.size(); i++)
        std::cout << unsortedVector[i] << " ";

    std::cout << std::endl;
    std::cout << "Time to process a range of " << unsortedVector.size() << " elements with std::vector : " << t << " seconds" << std::endl;
    std::cout << std::endl;

    std::cout << "Before: ";
    for (std::list<int>::iterator it = unsortedList.begin(); it != unsortedList.end(); it++)
        std::cout << *it << " "; 
    std::cout << std::endl;
    
    t = clock();
    mergeInsertList(unsortedList, 0, unsortedList.size() - 1);
    t = clock() - t;

    std::cout << "After: ";
    for (std::list<int>::iterator it = unsortedList.begin(); it != unsortedList.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of " << unsortedList.size() << " elements with std::list : " << t << " seconds" << std::endl;
    std::cout << std::endl;

}