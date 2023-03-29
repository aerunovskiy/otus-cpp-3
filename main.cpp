#include <algorithm>
#include <iostream>

#include "allocator.h"
#include "list.h"
#include "tools.h"

int main(int, char**) {
    try {
        List<int> l{};
        std::cout << l.empty() << std::endl;
        l.push_back(3);
        l.push_back(123);
        l.push_back(8);
        std::cout << l.empty() << std::endl;
        l.print();

        std::cout << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return EXIT_SUCCESS;
}