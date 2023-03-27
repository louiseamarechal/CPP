#include "PmergeMe.hpp"

int main( int argc, char **argv ) {

    if (argc < 2)
    {
        std::cout << "Error: incorrect format !" << std::endl;
        return (1);
    }

    std::string         argument;

    for (int i = 1; i < argc; i++)
        argument += argv[i];

    // argument = removeWhitespaces(argument);

    std::vector<int>    unsortedVector = parseArgsToVector(argument);

    if (unsortedVector.empty())
    {
        std::cout << "Error: not enough parameters !" << std::endl;
        return (1);
    }

    std::cout << "Unsorted argument = ";
    for (size_t i = 0; i < unsortedVector.size(); i++)
        std::cout << unsortedVector[i] << " ";

    mergeInsert(unsortedVector, 0, unsortedVector.size() - 1);

    // std::cout << std::endl;

    // std::vector<std::list<int> > splittedList = splitVectorInPairs(unsortedVector);

    // // for (size_t i = 0; i < splittedList.size(); i++)
    // // {
    // //     while (!splittedList[i].empty())
    // //     {
    // //         std::cout << splittedList[i].front() << " ";
    // //         splittedList[i].pop_front();
    // //     }
    // //     std::cout << std::endl;
    // // }

    // mergeInsert(splittedList);

}