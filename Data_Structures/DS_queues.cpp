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
    unsigned int length {0};

public:
    Queue() {
        first = nullptr;
        last = nullptr;
    }

    bool isEmpty() {
        return (length != 0) ? false : true;
    }

    void enQueue(int data) {
        Node *newNode = new Node(data);
        if (first != nullptr) {
            newNode->next = last;
            last = newNode;
        } else {
            first = newNode;
            last = newNode;
        }
        length++;
    }

    void deQueue() {
        if (isEmpty()) {
            std::cerr << "No elements found to dequeue \n";
            return;
        } else {
            Node *temp = last;
            while (temp->next != first) {
                temp = temp->next;
            }
            // std::cout << temp->data;
            delete first;
            first = temp;
        }
        length--;
    }

    void viewQueue() {
        if (isEmpty()) {
            std::cout << "Queue is empty \n";
            return;
        } else {
            Node *temp = last;
            do {
                std::cout << temp->data << std::endl;
                temp = temp->next;
            } while (temp != first->next);
        }
    }

    void getLength() {
        if (isEmpty()) {
            std::cout << "Queue is empty \n";
            return;
        } else {
            std::cout << "Queue length is: " << length << "\n";
        }
    }
};

int main() {
    Queue one;
    for (int x = 0; x < 10; x++) {
        one.enQueue(x);
    }
    one.deQueue();
    one.viewQueue();
}