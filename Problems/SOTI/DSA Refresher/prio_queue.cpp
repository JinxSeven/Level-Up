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
                last->next = newNode;
                last = newNode;
                length++;
            } else {
                first= newNode;
                last = newNode;
                length++;
            }
        }

        void deQueue() {
            if (length != 0) {
                Node *temp = first;
                temp->next = first;
                delete(temp);
                length--;
            } else {
                throw std::out_of_range("Queue is empty!");
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