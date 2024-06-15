#include <iostream>

class Node {
    public:
        int data;
        Node *next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

class Queue {
    private:
        int length;
        Node *first, *last;
    public:
        Queue() {
            first = nullptr;
            last = nullptr;
        }
        void enQueue(int data) {
            Node *newNode = new Node(data);
            if (first != nullptr) {
                newNode->next = last;
                last = newNode;
            } else {
                first= newNode;
                last = newNode;
            }
        }

        void printQueue() {
            Node *current = last;
            while (current != nullptr) {
                std::cout << current->data << " ";
                current = current->next;
            }
        }

        int getLength() { std::cout << "Length: " << length; }
};

int main() {
    Queue brandNewQueue;
    brandNewQueue.enQueue(5);
    brandNewQueue.enQueue(4);
    brandNewQueue.enQueue(3);
    brandNewQueue.printQueue();
}