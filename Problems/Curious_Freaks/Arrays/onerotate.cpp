#include <iostream>

void oneRotate(int arr[], int size) {
    int temp = arr[size - 1];
    for (int a {size - 1}; a >= 0; a--) {
        arr[a] = arr[a - 1];
    }
    arr[0] = temp;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char **argv) {
    int arr[] = {3, 2, 1, 56, 10000, 167};
    int size = sizeof(arr) / sizeof(arr[0]);
    // std::cout << arr[size - 1] << std::endl;
    oneRotate(arr, size);
}