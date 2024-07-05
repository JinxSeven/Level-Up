#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {12, 17, 52, 10, 96, 21};
    int find2 = 10;
    auto mem2 = std::find(arr, arr + sizeof(arr)/sizeof(arr[0]), find2);
    std::cout << mem2 << std::endl;
    std::cout << mem2 - arr << std::endl;
}
