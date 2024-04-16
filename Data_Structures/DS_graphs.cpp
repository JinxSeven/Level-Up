#include <iostream>
#include <unordered_map>
#include <unordered_set>

class Graph {
    private:
        std::unordered_map<char, std::unordered_set<std::string>>adjList;

    public:
        bool addVertex(char vertex) {
            if (adjList.count(vertex) == 0) {
                adjList[vertex];
                return true;
            }
            std::cout << "Duplicate Vertex\n";
            return false;
        }

};

int main() {
    Graph *one = new Graph();

}