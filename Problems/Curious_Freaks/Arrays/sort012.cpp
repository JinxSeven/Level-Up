#include <iostream>
#include <unordered_map>

void zeronetwos(int arr[], int size) {
    std::unordered_map<int,int>mapper;

    for (int i = 0; i < size; i++) {
        mapper[arr[i]]++;
    }
    int indx {0};
    for (int x = 0; x < mapper[0]; x++) {
        arr[indx] = 0;
        indx++;
    }
    for (int x = 0; x < mapper[1]; x++) {
        arr[indx] = 1;
        indx++;
    }
    for (int x = 0; x < mapper[2]; x++) {
        arr[indx] = 2;
        indx++;
    }
}

int main() {
    int arr[] = {2, 2, 0, 1, 2, 0, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    zeronetwos(arr, size);
    for (int out : arr) {
        std::cout << out << " ";
    }
    std::cout << std::endl;
}
