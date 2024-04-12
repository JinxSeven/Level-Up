#include <iostream>
#include <vector>

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

class HashTable {
    private:
        static const int SIZE = 7;
        Node *dataMap[SIZE];

        int indexHash(std::string map) {
            int hash = 0;
            for (int x = 0; x < map.length(); x++) {
                int asciiValue = int(map[x]);
                hash = (hash + asciiValue * 23) % SIZE;
            }
            return hash;
        }

    public:
        // ---------------------------------------------------
        //  Destructor code is similar to keys() function
        //  Watch that video to help understand how this works
        // ---------------------------------------------------
        ~HashTable() {
            for(int x = 0; x < SIZE; x++) {
                Node *head = dataMap[x];
                Node *temp = head;
                while (head) {
                    head = head->next;
                    delete temp;
                    temp = head;
                }
            }
        }
        
        void printTable() {
            for(int x = 0; x < SIZE; x++) {
                std::cout << x << ":" << std::endl;
                if(dataMap[x]) {
                    Node *temp = dataMap[x];
                    while (temp) {
                        std::cout << "   {" << temp->map << ", " << temp->data << "}" << std::endl;
                        temp = temp->next;
                    }
                }
            }
        }
        
        // WRITE SET MEMBER FUCTION HERE //
        void setHash(std::string map, int data) {
            Node *new_node = new Node(map, data);
            int index = indexHash(map);
                if (dataMap[index]) {
                    Node *temp = dataMap[index];
                        while (temp->next) {
                            temp = temp->next;
                        }
                    temp->next = new_node;
                } else {
                    dataMap[index] = new_node;
                }
        }

        void getHash(std::string map) {
            int index = indexHash(map);
            Node *temp = dataMap[index];
                while (temp) {
                    if (map.compare(temp->map) == 0) {
                        std::cout << "Data mapped: " << temp->data << std::endl;
                        return;
                    }
                    temp = temp->next;
                }
            std::cout << "No data mapped :( \n";
        }

        std::vector<std::string> vecMap() {
            std::vector<std::string>allMaps;
            for (int x = 0; x < SIZE; x++) {
                if (dataMap[x]) {
                    Node *temp = dataMap[x];
                    while (temp) {
                        allMaps.push_back(temp->map);
                        temp = temp->next;
                    }
                }
            }
            return allMaps;
        }
    
};


int main() {
    HashTable *one = new HashTable();

    one->setHash("nuts", 100);
    one->setHash("tile", 50);
    one->setHash("wood", 80);
    one->setHash("shglue", 120);
    one->setHash("bolts", 150);
    one->setHash("screws", 140);

    one->getHash("shglue");
    std::vector<std::string>output = one->vecMap();
    for (auto out : output) {
        std::cout << out << " \n";
    }
    return 0;
}