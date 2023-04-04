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

void printMap(const std::map<int, int>& map);

}