#include <iostream>

int missingInt(int arr[], int size) {
    int acc = 0;
    int exp = ((size + 1) * (size + 2)) / 2;
    for (int a {0}; a < size; a++) {
        acc += arr[a];
    }
    return exp - acc;
}

int main(int argc, char **argv) {
    int arr[] = {6,1,2,8,3,4,7,10,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << missingInt(arr, size) << std::endl;
}