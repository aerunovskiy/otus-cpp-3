#pragma once

template<class T>
struct Node {
    explicit Node(T data) : data(data), next(nullptr) {}

    T data;
    Node* next;
};