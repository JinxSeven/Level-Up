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

    void prependList(int data) {
        Node *newNode = new Node(data); 
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                Node *temp = head;
                head = newNode;
                head->next = temp;
                temp->prev = head;
            }
        length++;
    }

    void deleteLast() {
        if (head == nullptr) {
            std::cerr << "No elements in list to delete \n";
            return;
        } else if (length == 1) {
            delete head;
            head = nullptr;
            tail = nullptr;
            length--;
        } else {
            Node *temp = tail->prev;
            delete tail;
            tail = temp;
            tail->next = nullptr;
            length--;
        }
    }

    void deleteFirst() {
        if (head != nullptr) {
            if (length == 1) {
                delete head;
                head = nullptr;
                tail = nullptr;
                length--;
            } else {
                Node *temp = head;
                head = head->next;
                head->prev = nullptr;
                delete temp;
                length--;
            }
        } else {
            std::cerr << "No elements in list to delete \n";
            return;
        }
        length--;
    }

    void indexGet(int index) {
        if (index < 0 || index >= length) {
            std::cerr << "Invalid index \n";
            return;
        } else {
            Node *temp = head;
            for (int x = 0; x < index; x++) {
                temp = temp->next;
            }
            
            std::cout << temp->data << std::endl;
        }
    }

    void indexInsert(unsigned int index, int data) {
        if (index < 0 || index >= length) {
            std::cerr << "Invalid index \n";
            return;
        } else {
        Node *newNode = new Node(data);
        Node *temp = head;
        Node *temp2;
            for (int x = 0; x <= index; x++) {
                temp2 = temp->prev;
                temp = temp->next;
            }
            temp2->next = newNode;
            newNode->prev = temp2;
            newNode->next = temp;
            temp->prev =newNode;
        }
        length++;
    }

    void getLength() {
        std::cout << "List's length: " << length <<std::endl;
    }
};

int main() {
    DList one;
    for (int x = 1; x < 11; x++) {
        one.appendList(x);
    }
    one.indexInsert(5, 55);
    one.deleteFirst();
    one.viewList();
    return 0;
}