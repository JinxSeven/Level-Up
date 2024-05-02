#include <iostream>
#include <utility>
#include <vector>


void selection(std::vector<int> unsorted) {
    for (int w = 0; w < (unsorted.size() - 1); w++) {
        int minIndx = w;
        for (int s = w + 1; s < (unsorted.size() - 1); s++) {
            if (unsorted[minIndx] > unsorted[s]) {
                minIndx = s;
            }
        }
        if (w != minIndx) {
            std::swap(unsorted[w], unsorted[minIndx]);
        }
    }

    for (auto a : unsorted) {
        std::cout << a << std::endl;
    }
}

int main(int argc, char* argv[]) {
    std::vector<int> unSort {1, 5, 9, 2, 0, 7};
    selection(unSort);
}