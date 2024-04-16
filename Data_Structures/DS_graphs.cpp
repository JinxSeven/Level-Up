#include <iostream>
#include <unordered_map>
#include <unordered_set>

class Graph {
    private:
        std::unordered_map<char, std::unordered_set<char>>adjList;

    public:
        bool addVertex(char vertex) {
            if (adjList.count(vertex) == 0) {
                adjList[vertex];
                return true;
            }
            std::cerr << "Duplicate Vertex!\n";
            return false;
        }

        bool addEdge(char from, char to) {
            if (adjList.count(from) != 0 and adjList.count(to) != 0) {
                adjList.at(from).insert(to);
                adjList.at(to).insert(from);
                return true;
            }
            std::cerr << "Missing Vertex!\n";
            return false;
        }

        bool removeEdge(char from, char to) {
            if (adjList.count(from) != 0 and adjList.count(to) != 0) {
                adjList.at(from).erase(to);
                adjList.at(to).erase(from);
                return true;
            }
        std::cerr << "Missing Vertex!\n";
        return false;
        }

};


int main() {
    Graph *one = new Graph();

    one->addVertex('A');
    one->addVertex('B');
    one->addEdge('A', 'B');
    one->addVertex('A');
}