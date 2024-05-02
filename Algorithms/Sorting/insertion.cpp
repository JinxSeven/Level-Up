#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& unsorted) {
    for (int w = 1; w < unsorted.size(); w++) {
        int current = unsorted[w];
        int s = w - 1;
        while (s >= 0 && unsorted[s] > current) {
            unsorted[s + 1] = unsorted[s];
            s--;
        }
        unsorted[s + 1] = current;
    }
    for (auto a : unsorted) {
        std::cout << a << std::endl;
    }
}

int main() {
    std::vector<int> arr = {5, 3, 8, 6, 2, 7, 1, 4};
    insertionSort(arr);
    return 0;
}
