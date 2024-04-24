#include <iostream>
#include <utility>
#include <vector>

void bubble(std::vector<int> toSort) {

    for (int j = 0; j < (toSort.size() - 1); j++) {
        for (int x = 0; x < (toSort.size() - 1 - j); x++) {
            if (toSort[x] > toSort[x + 1]) {
                std::swap(toSort[x], toSort[x + 1]);
            }
        }
    }
    for (int x : toSort) {
        std::cout << x << std::endl;
    }
}

int main(int argc, char* argv[]) {
    std::vector<int> unSort {1, 5, 9, 2, 0, 7};
    bubble(unSort);
}