#include <iostream>
#include <algorithm>

int thirdLargest(int arr[], int size) {
    std::sort(arr, arr +size, std::greater<int>());
    return arr[2];
}

int thirdLargestManual(int arr[], int size) {
    int count {0};
    for (int a {0}; a < size; a++) {
        for (int b {a + 1}; b < size; b++) {
            if (arr[a] < arr[b]) {
                int temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
        count++;
        if (count == 3) {break;}
    }
    return arr[2];
}


int main(int argc, char **argv) {
    int arr[] = {3, 2, 1, 56, 10000, 167};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << thirdLargestManual(arr, size);
}
