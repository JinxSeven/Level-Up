#include <bits/stdc++.h>

void selectionSort(int arr[], int size) {
    for (int x {0}; x < size; x++) {
        int y = x + 1, min = x;
        while (y < size) {
            if (arr[y] < arr[min]) min = y;
            y++;
        }
        std::swap(arr[x], arr[min]);
    }
    for (int q {0}; q < size; q++) {
        std::cout << arr[q] << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char** argv) {
    int arr[] = {5, 2, 6, 9, 7, 4, 3, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);
}
