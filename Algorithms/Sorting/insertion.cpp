#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& toSort) {
    for (int w = 1; w < toSort.size(); w++) {
        int current = toSort[w];
        int s = w - 1;
        while (s >= 0 && toSort[s] > current) {
            toSort[s + 1] = toSort[s];
            s--;
        }
        toSort[s + 1] = current;
    }
    for (auto a : toSort) {
        std::cout << a << std::endl;
    }
}

int main() {
    std::vector<int> arr = {5, 3, 8, 6, 2, 7, 1, 4};
    insertionSort(arr);
    return 0;
}
