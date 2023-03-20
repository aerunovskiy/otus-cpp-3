#pragma once

#include <cstdint>

class Allocator {
public:
    explicit Allocator(std::size_t size) : size(size) {}

private:
    std::size_t size;
};
