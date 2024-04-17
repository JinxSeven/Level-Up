#include <iostream>
#include <unordered_map>
#include <unordered_set>

class Graph {
    private:
        std::unordered_map<std::string, std::unordered_set<std::string>>adjList;

    public:

        void printGraph() {
            std::unordered_map<std::string, std::unordered_set<std::string>>::iterator outGraph = adjList.begin();
            while (outGraph != adjList.end()) {
                std::cout << outGraph->first << ": [";
                std::unordered_set<std::string>::iterator edge = outGraph->second.begin();
                while (edge != outGraph->second.end()) {
                    std::cout << edge->data() << " ";
                    edge++;
                }
                std::cout << "]\n";
                outGraph++; 
            }
        }

        bool addVrtx(std::string vrtx) {
            if (adjList.count(vrtx) == 0) {
                adjList[vrtx];
                return true;
            }
        std::cerr << "Duplicate vrtx!\n";
        return false;
        }

        bool addEdge(std::string vrtx1, std::string vrtx2) {
            if (adjList.count(vrtx1) != 0 and adjList.count(vrtx2) != 0) {
                adjList.at(vrtx1).insert(vrtx2);
                adjList.at(vrtx2).insert(vrtx1);
                return true;
            }
        std::cerr << "Missing vrtx!\n";
        return false;
        }

        bool rmEdge(std::string vrtx1, std::string vrtx2) {
            if (adjList.count(vrtx1) != 0 and adjList.count(vrtx2) != 0) {
                adjList.at(vrtx1).erase(vrtx2);
                adjList.at(vrtx2).erase(vrtx1);
                return true;
            }
        std::cerr << "Missing vrtx!\n";
        return false;
        }

        bool rmVrtx(std::string vrtx) {
            if (adjList.count(vrtx) != 0) {
                for (auto x : adjList.at(vrtx)) {
                    adjList.at(x).erase(vrtx);
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

    Graph* myGraph = new Graph();

    myGraph->addVrtx("A");
    myGraph->addVrtx("B");
    myGraph->addVrtx("C");
    myGraph->addVrtx("D");

    myGraph->addEdge("A", "B");
    myGraph->addEdge("A", "C");
    myGraph->addEdge("A", "D");
    myGraph->addEdge("B", "D");
    myGraph->addEdge("C", "D");
    
    std::cout << "Graph before: \n";
    myGraph->printGraph();


    myGraph->rmVrtx("D");


    std::cout << "\n\nGraph after: \n";
    myGraph->printGraph();
}