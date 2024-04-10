#include <iostream>
#include <string>

class Node {
    public:
        std::string key;
        int value;
        Node *next;

    Node(std::string key, int value) {
        this->key = key;
        this->value = value;
        next = nullptr;
    }
};

class Hash {
    private:
        static const int SIZE = 7;
        Node *dataMaps[SIZE];

    int hashIndex(std::string key) {
        int hashx {0};
        for (char x : key) {
            hashx = (hashx + x) * 23;
        }
        return hashx % SIZE;
    }

    public:
        void addHash(std::string key, int value) {
            Node *new_node = new Node(key, value);
            int index = hashIndex(key);
            if (dataMaps[index] != nullptr) {
                Node *current = dataMaps[index];
                while (current->next) {
                    current = current->next;
                }
                current->next = new_node;
            } else {
                dataMaps[index] = new_node;
            }
        }


};

int main() {
    Hash one;
    one.addHash();
}


int function() {

}