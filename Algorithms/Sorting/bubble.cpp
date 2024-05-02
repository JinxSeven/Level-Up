#include <iostream>
#include <utility>
#include <vector>

void bubble(std::vector<int> unsorted) {

    for (int j = 0; j < (unsorted.size() - 1); j++) {
        for (int x = 0; x < (unsorted.size() - 1 - j); x++) {
            if (unsorted[x] > unsorted[x + 1]) {
                std::swap(unsorted[x], unsorted[x + 1]);
            }
        }
    }
    for (int x : unsorted) {
        std::cout << x << std::endl;
    }
}

int main(int argc, char* argv[]) {
    std::vector<int> unSort {1, 5, 9, 2, 0, 7};
    bubble(unSort);
}