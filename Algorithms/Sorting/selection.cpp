#include <iostream>
#include <utility>
#include <vector>


void selection(std::vector<int> toSort) {
    for (int w = 0; w < (toSort.size() - 1); w++) {
        int minIndx = w;
        for (int s = w + 1; s < (toSort.size() - 1); s++) {
            if (toSort[minIndx] > toSort[s]) {
                minIndx = s;
            }
        }
        if (w != minIndx) {
            std::swap(toSort[w], toSort[minIndx]);
        }
    }

    for (auto a : toSort) {
        std::cout << a << std::endl;
    }
}

int main(int argc, char* argv[]) {
    std::vector<int> unSort {1, 5, 9, 2, 0, 7};
    selection(unSort);
}