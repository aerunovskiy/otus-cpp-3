#pragma once

template<typename T, size_t size>
class Allocator {
public:
    Allocator() noexcept {

    }

    
private:
    size_t allocated_size {0};
    T* data {nullptr};

};
