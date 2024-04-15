#include <iostream>
#include <random>

int duplicates {0};

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

class BSTree {
    private:
        int height {0};
        Node *root;

    public:
        BSTree() : root (nullptr) {};

    bool appendTree(int data) {
        Node *newNode = new Node(data);
        if (root == nullptr) {
            root = newNode;
            return true;
        } else {
            Node *temp = root;
            while (true) {
                if (data == temp->data) {
                    duplicates++;
                    return false;
                }
                else if (data < temp->data) {
                    if (temp->left == nullptr) {
                        temp->left = newNode;
                        return true;
                    }
                    temp = temp->left;
                } else {
                    if (temp->right == nullptr) {
                        temp->right = newNode;
                        return true;
                    }
                    temp = temp->right;
                }
            }
        }
    }

    bool treeContains(int data) {
        Node *temp = root;
        while (temp != nullptr) {
            if (data == temp->data) {
                return true;
            } else if (data < temp->data) {
                temp = temp->left;
            } else {
                temp = temp->right;
            }
        }
            return false;
    }

    void viewTreeRecur(Node *start) {
        if (start == nullptr) {
            return;
        }
        viewTreeRecur(start->left);
        std::cout << start->data << " ";
        viewTreeRecur(start->right);
    }

    void containsOut(int data) {
        if (treeContains(data)) {
            std::cout << data << " Found";
        } else {
            std::cout << data << " Not found";
        }
    }

    void viewTree() {
        viewTreeRecur(root);
        std::cout << "Duplicates: " << duplicates << "\n";
    }
};

int main() {
    // std::random_device randDev;
    // std::mt19937 gen(randDev());

    // std::uniform_int_distribution<int>numSelect(1, 15);

    BSTree one;

    // for (int x = 0; x < 5; x++) {
    //     int final = 5 * numSelect(gen);
    //     one.appendTree(final);
    // }

    one.appendTree(100);
    one.appendTree(20);
    one.appendTree(200);
    one.appendTree(10);
    one.appendTree(30);
    one.appendTree(150);
    one.appendTree(300);

    one.viewTree();
    // one.containsOut(5 * numSelect(gen));
    return 0;
}
