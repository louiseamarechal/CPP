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

    std::cout << "Unsorted argument = " << argument << std::endl;
    // argument = removeWhitespaces(argument);

    std::vector<int>    unsortedList = parseArgsToVector(argument);

    if (unsortedList.empty())
    {
        std::cout << "Error: not enough parameters !" << std::endl;
        return (1);
    }


    std::vector<std::vector<int> > splittedVector = splitVectorInPairs(unsortedList);

    for (size_t i = 0; i < splittedVector.size(); i++)
    {
        for  (size_t j = 0; j < splittedVector[i].size(); j++)
            std::cout << unsortedList[j] << " ";
        std::cout << std::endl;
    }

}