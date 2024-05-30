#include <iostream>

void minMax(int arr[], int size) {
    int min, max = arr[0];
    for (int a {1}; a < size; a++) {
        if (arr[a] > max) {
            max = arr[a];
        } else if (arr[a] < min) {
            min = arr[a];
        }
    }
    std::cout << min << " " << max << std::endl;
} 

int main(int argc, char **argv) {
    int arr[] = {3, 2, 1, 56, 10000, 167};
    int size = sizeof(arr) / sizeof(arr[0]);
    minMax(arr, size);
}
