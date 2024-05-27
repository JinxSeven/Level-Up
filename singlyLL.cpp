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

class LinkedList {
    private:
        int length {0};
        Node *head;

    public:
    LinkedList() : head(nullptr) {};

    void outLength() {
        std::cout << length;
    }

    void appendList(int data) {
        Node *newNode = new Node(data);
        if (head) {
            Node *current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        } else {
            head = newNode;
        }
        length++;
    }

    void prependList(int data) {
        Node *newNode = new Node(data);
        if (head) {
            newNode->next = head;
            head = newNode;
        } else {
            head = newNode;
        }
        length++;
    }

    void outList() {
        Node *current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
    }

};

int main() {
    LinkedList one;
    one.appendList(25);
    one.appendList(45);
    one.prependList(15);
    one.outList();
    one.outLength();
}