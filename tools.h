#pragma once

#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <vector>

namespace tools
{

int version();

int factorial(int number);

template <class Allocator>
void fillMap(std::map<int, int, std::less<int>, Allocator>& map) {
    for (int i {0}; i < 10; ++i)
        map.emplace(i, factorial(i));
}

template <class Allocator>
void printMap(const std::map<int, int>& map) {
    std::cout << std::setw(3) << "KEY" << " | " << std::setw(6) << "VALUE" << std::endl;
    std::cout << "---+--------" << std::endl;

    for (int i {0}; i < 10; ++i)
        std::cout << std::setw(3) <<  i << " | " << std::setw(6) << map.at(i) << std::endl;

    std::cout << "---+--------" << std::endl;
}

}