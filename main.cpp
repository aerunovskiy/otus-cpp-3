#include <algorithm>
#include <iostream>

#include "allocator.h"
#include "list.h"
#include "tools.h"

int main(int, char**) {
    try {
        std::cout << tools::factorial(10) << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return EXIT_SUCCESS;
}