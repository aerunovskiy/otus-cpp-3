#include "tools.h"

#include "version.h"

namespace tools
{

int version() {
    return PROJECT_VERSION_PATCH;
}

int factorial(int number)
{
    if (number == 0)
        return 1;

    return number * factorial(number - 1);
}

void printMap(const std::map<int, int>& map)
{
    std::cout << std::setw(3) << "KEY" << " | " << std::setw(6) << "VALUE" << std::endl;
    std::cout << "------------" << std::endl;

    for (int i {0}; i < 10; ++i)
        std::cout << std::setw(3) <<  i << " | " << std::setw(6) << map.at(i) << std::endl;

    std::cout << "------------" << std::endl;
}

}