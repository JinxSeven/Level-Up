#include <iostream>

void RotateArrayOne(int arr[], int rotateBy, int size) {
    int newarr[size];
    for (int i = 0; i < size; i++) {
        int rem = i - rotateBy;
        if (rem >= 0) {
            newarr[rem] = arr[i];
        } else {
            while (rem < 0) {
            rem += size;
            }
            newarr[rem] = arr[i];
        }
    }
    for (int x : newarr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

void RotateArrayTwo(int arr[], int rotateBy, int size) {
    int newarr[size];
    for (int i = 0; i < size; i++) {
        int rem = (i - rotateBy) % size;
        newarr[rem] = arr[i];
    }
    
    for (int x : newarr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

void RotateArrayThree(int arr[], int rotateBy, int size) {
    int temparr[] = {};
    for (int i = 0; i < rotateBy; i++) {
        temparr[i] = arr[i];
    }
    for (int j = rotateBy; j < size; j++) {
        temparr[j] = arr[j];
    }
    for (int x = 0 ; x < size; x++) {
        std::cout << temparr[x] << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char** argv) {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    RotateArrayTwo(numbers, 3, size);
}
