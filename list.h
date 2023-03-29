#pragma once

#include "node.h"

template<typename T>
class List {
public:
    List() = default;

    List(Node<T>* first, Node<T>* last)
    : _first(first),
      _last(last)
    {}

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

    bool empty() const {
        return _first == nullptr;
    }

    void print() const {
        if (empty()) return;

        Node<T>* p = _first;

        while (p) {
            std:: cout << p->data << ' ';
            p = p->next;
        }

        std::cout << std::endl;
    }

    size_t size() const {
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
    Node<T>* _first;
    Node<T>* _last;
    size_t _size {0};
};
