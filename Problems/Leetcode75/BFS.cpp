#include <bits/stdc++.h>

class Graph {
private:
    std::unordered_map<int, std::list<int>> grapher;

public:
    void updtGraph(int vtx, std::list<int> edg) {
        grapher[vtx] = edg;
    }

    void bfs(int src) {
        std::unordered_map<int, bool> visited;
        std::queue<int> bfsq;
        
        bfsq.push(src);
        visited[src] = true;
        while (!bfsq.empty()) {
            auto x = bfsq.front();
            bfsq.pop();

            for (auto itr = grapher[x].begin(); itr != grapher[x].end(); itr++) {
                if (visited.find(*itr) == visited.end()) {
                    bfsq.push(*itr);
                    visited[*itr] = true;
                }
            }
            std::cout << x << "->";
        }
    }
};

int main(int argc, char** argv) {
    Graph one;
    one.updtGraph(0, {1, 3});
    one.updtGraph(1, {0, 2});
    one.updtGraph(4, {5});
    one.updtGraph(5, {4});
    one.updtGraph(3, {0, 2, 4});
    one.updtGraph(2, {3, 1});

    one.bfs(0);
    std::cout << "end of graph" << std::endl;
}
