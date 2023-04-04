#include <algorithm>
#include <iostream>

#include "allocator.h"
#include "list.h"
#include "tools.h"

int main(int, char**) {
    try {
        std::map<int, int> factorials;

        for (uint i {0}; i < 10; ++i)
            factorials[i] = tools::factorial(i);

        tools::printMap(factorials);

    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return EXIT_SUCCESS;
}