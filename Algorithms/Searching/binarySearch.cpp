#include <iostream>

int binarySearch(int target, int lidx, int ridx, int arr[]) {
    if (lidx > ridx) {
        return -5;
    }
    int mid = lidx + (ridx - lidx) / 2;
    if (arr[mid] == target) {
        std::cout << "Found!";
        return mid;
    }
    else if (arr[mid] < target) {
        binarySearch(target, lidx, (mid - 1), arr);
    }
    else {
        binarySearch(target, (mid + 1), ridx, arr);
    }
    return 0;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarySearch(target, 0, arr_size - 1, arr);

    if (result != -5) {
        std::cout << "Element found in the array" << std::endl;
    } else {
        std::cout << "Element not found in the array" << std::endl;
    }
    return 0;
}