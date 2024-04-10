#include <iostream>
#include <string>

class Node {
    public:
        std::string map;
        int data;
        Node *next;

    Node(std::string map, int data) {
        this->map = map;
        this->data = data;
        next = nullptr;
    }
};
