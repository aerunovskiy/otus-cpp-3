#pragma once

template<typename T>
struct Node {
    explicit Node(T data) : data(data), next(nullptr) {}

    T data;
    Node* next;
};