#include <iostream>
#include <vector>
#include <unordered_map>

void common(std::vector<int>vec_one, std::vector<int>vec_two) {
    std::unordered_map<int, bool>vecMap;
        for (auto x : vec_one) {
            vecMap.insert({x, true});
        }
        for (auto z : vec_two) {
            if (vecMap[z]) {
                std::cout << "Matched\n";
                return;
            }
        }
    std::cout << "No matches\n";
}

int main() {
    std::vector<int>vec_one = {9, 8, 7, 6, 5};
    std::vector<int>vec_two = {1, 2, 3, 4, 5};
    
    common(vec_one, vec_two);
}
