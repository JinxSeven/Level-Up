#include <iostream>
#include <queue>

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {
private:
    Node *first;
    Node *last;
    unsigned int length;

public:
    Queue() {
        first = nullptr;
        last = nullptr;
    }

    void enQueue(int data) {
        Node *newNode = new Node(data);
        if (first != nullptr) {

        } else {
            first = newNode;
            last = newNode;
        }
    }
};