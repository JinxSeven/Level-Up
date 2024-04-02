#include <iostream>

class Node {
    public:
        int data;
        Node *left;
        Node *right;

    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

class BStree {
    private:
        int height {0};
        Node *root;

    public:
        BStree() : root (nullptr) {};

    void appendTree(int data) {
        Node *newNode = new Node(data);
        if (root != nullptr) {
            Node *temp = root;
            if (newNode->data >= temp->data) {
                temp->right = newNode;
            } else {
                temp->left = newNode;
            }
        } else {
            root = newNode;
        }
    }

    void viewTree() {
        std::cout << root->data << " ";
        std::cout << root->left->data << " ";
        std::cout << root->right->data << " ";
    }
};

int main() {
    BStree one;
    one.appendTree(10);
    one.appendTree(5);
    one.appendTree(15);
    one.viewTree();
    return 0;
}