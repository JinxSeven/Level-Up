#include <iostream>
#include <vector>

class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DList {
public:
    Node *head;
    Node *tail;
    int length {0};

    DList() {
        head = nullptr;
        tail = nullptr;
    }

    void appendList(int data) {
        Node *newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        length++;
    }

    void viewList() {
        Node *temp = head;
        while (temp != nullptr) {
            std::cout << temp->data <<std::endl;
            temp = temp->next;
        }
        
    }

    void getLength() {
        std::cout << "List Length: " << length <<std::endl;
    }
};

int main() {
    DList one;
    for (int x = 10; x < 20; x++) {
        one.appendList(x);
    }

    one.viewList();
    one.getLength();
}