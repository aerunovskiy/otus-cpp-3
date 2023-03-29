#pragma once

template<typename T, size_t size>
class Allocator {
public:
    Allocator() {

    }

    
private:
    size_t allocated_size {0};
    T* data {nullptr};

};
