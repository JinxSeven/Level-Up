#include <iostream>
#include <string>

class Node {
    public:
        std::string map;
        int data;
        Node *next;

    Node(std::string map, int data) {
        this->map = map;
        this->data = data;
        next = nullptr;
    }
};

class Hash {
    private:
        static const int SIZE = 11;
        Node *dataMaps[SIZE];

    public:
        Hash() {
        for (int z = 0; z < SIZE; ++z) {
            dataMaps[z] = nullptr;
        }
    }

        void viewTable() {
            for (int x = 0; x < SIZE; x++) {
                std::cout << x << ": ";
                if (dataMaps[x]) {
                    Node *current = dataMaps[x];
                    while (current) {
                        std::cout << "{" << current->map << " - " << current->data << "}";
                        current = current->next;
                    }
                    
                }
            }
            std::cout << std::endl;
        }

        void indexHash(std::string map) {
            for (char x : map) {
                int hashx = x 
            }
        }

        void addHash()
};  

int main() {
    Hash one;
    one.viewTable();
    return 0;
}
