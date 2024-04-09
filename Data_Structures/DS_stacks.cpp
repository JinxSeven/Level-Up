#include <iostream>
#include <stack>

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack {
private:
    Node *top;
    int size {0};

public:
    Stack() : top(nullptr) {}

    void pushStack(int data) {
        Node *new_node = new Node(data);
            if (top != nullptr) {
                new_node->next = top;
                top = new_node;
            } else {
                top = new_node;
            }
        size++;
    }

    void popStack() {
        Node *temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    void getSize() {
        std::cout << "Stack size is: " << size << "\n";
    }

    void viewStack() {
        Node *temp = top;
        while (temp != nullptr) {
            std::cout << temp->data << std::endl;
            temp = temp->next;
        }
    }
};

int main() {
    Stack one;
    for (size_t x = 0; x < 10; x++) {
        one.pushStack(x);
    }
    for (int j = 3; j > 0; j--) {
        one.popStack();
    }
    one.viewStack();
    return 0;
}