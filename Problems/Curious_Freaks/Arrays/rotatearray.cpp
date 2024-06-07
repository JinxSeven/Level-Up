#include <iostream>

void rotateArray(int arr[], int rotateBy, int size) {
    int newarr[size];
    for (int i = 0; i < size; i++) {
        int rem = i - rotateBy;
        if (rem > 0) {
            newarr[rem] = arr[i];
        } else {
            while (rem < 0) {
            rem = size - rem;
            }
            newarr[rem] = arr[i];
        }
    }
    for (int x : newarr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char** argv) {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    rotateArray(numbers, 3, size);
}