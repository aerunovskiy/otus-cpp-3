#include "tools.h"

#include "version.h"

namespace tools
{

int version() {
    return PROJECT_VERSION_PATCH;
}

uint factorial(uint number)
{
    if (number == 0)
        return 1;

    return number * factorial(number - 1);
}

}