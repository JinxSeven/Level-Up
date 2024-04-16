#include <iostream>
#include <unordered_map>
#include <unordered_set>

class Graph {
    private:
        std::unordered_map<char, std::unordered_set<char>>adjList;

    public:

        void printGraph() {
            std::unordered_map<char, std::unordered_set<char>>::iterator outGraph = adjList.begin();
            while (outGraph != adjList.end()) {
                std::cout << outGraph->first << ": [";
            }
        }

        bool addVrtx(char vrtx) {
            if (adjList.count(vrtx) == 0) {
                adjList[vrtx];
                return true;
            }
        std::cerr << "Duplicate vrtx!\n";
        return false;
        }

        bool addEdge(char vrtx1, char vrtx2) {
            if (adjList.count(vrtx1) != 0 and adjList.count(vrtx2) != 0) {
                adjList.at(vrtx1).insert(vrtx2);
                adjList.at(vrtx2).insert(vrtx1);
                return true;
            }
        std::cerr << "Missing vrtx!\n";
        return false;
        }

        bool rmEdge(char vrtx1, char vrtx2) {
            if (adjList.count(vrtx1) != 0 and adjList.count(vrtx2) != 0) {
                adjList.at(vrtx1).erase(vrtx2);
                adjList.at(vrtx2).erase(vrtx1);
                return true;
            }
        std::cerr << "Missing vrtx!\n";
        return false;
        }

        bool rmVrtx(char vrtx) {
            if (adjList.count(vrtx) != 0) {
                for (auto x : adjList.at(vrtx)) {
                    rmEdge(x, vrtx);
                }
                adjList.erase(vrtx);
                return true;
            }
        std::cerr << "Missing vrtx!\n";
        return false;
        }

};

int main() {
    Graph *one = new Graph();

    one->addVrtx('A');
    one->addVrtx('B');
    one->addVrtx('C');
    one->addEdge('A', 'B');
    one->addEdge('B', 'C');
    one->addEdge('A', 'B');
    
}