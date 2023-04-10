#pragma once

#include "node.h"

template<class T, class Allocator = std::allocator<T>>
class List {
public:
    List() = default;

    List(Node<T>* first, Node<T>* last)
    : _first(first),
      _last(last)
    {}

    ~List() {
        while (_first != nullptr) {
            auto p = _first;
            _first = _first->next;
            allocator.destroy(p);
            allocator.deallocate(p, 1);
        }
    }

    void push_back(int i) {
        Node<T>* new_node = new Node(i);

        ++_size;

        if (empty()) {
            _first = new_node;
            _last = new_node;
            return;
        }

        _last->next = new_node;
        _last = new_node;
    }

    [[nodiscard]] bool empty() const {
        return _first == nullptr;
    }

    void print() const {
        if (empty()) return;

        Node<T>* p = _first;

        while (p) {
            std::cout << p->data << ' ';
            p = p->next;
        }

        std::cout << std::endl;
    }

    [[nodiscard]] size_t size() const {
        return _size;
    }

    Node<T>* operator[] (const size_t index) {
        if (empty()) return nullptr;

        Node<T>* node = _first;

        for (size_t i {0}; i < index; ++i) {
            node = node->next;
            if (!node) return nullptr;
        }

        return node;
    }

private:
    using NodeAllocator = typename Allocator::template rebind<Node>::other;
    NodeAllocator allocator;

    Node<T>* _first;
    Node<T>* _last;
    size_t _size {0};
};
