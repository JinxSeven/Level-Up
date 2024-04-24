#include <iostream>
#include <utility>
#include <vector>

void insertions(std::vector<int> toSort) {
    for (int w = 1; w < (toSort.size() - 1); w++) {
        int current = toSort[w];
        int s = w - 1;
        while (current < toSort[s]) {
            std::swap(toSort[w], toSort[s]);
            if (s == 0) {
                break;
            }
            s--;
        }
    }
    for (auto a : toSort) {
        std::cout << a << std::endl;
    }
}

int main(int argc, char* argv[]) {
    std::vector<int> unSort {1, 5, 9, 2, 0, 7};
    insertions(unSort);
}
