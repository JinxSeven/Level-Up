#include <iostream>

bool compare(int i, int j) { return i > j;}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size - i; j++) {
            // if (arr[i] > arr[j]) std::swap(arr[i], arr[j]);
            if (compare)
        }
    }
}

int main() {
    int arr[] = {12, 17, 52, 10, 10, 10, 96, 96, 21};
    bubbleSort(arr, sizeof(arr)/sizeof(int));
    for (int x : arr) { std::cout << x << " "; }
    std::cout << std::endl;
}
