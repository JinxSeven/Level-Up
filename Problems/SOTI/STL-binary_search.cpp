#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {12, 17, 52, 10, 10, 10, 96, 96, 21};
    std::sort(arr, arr + sizeof(arr)/sizeof(int)); // Binary Search oly works on sorted arrays
    int find = 15;
    // bool check = std::binary_search(arr, arr + sizeof(arr)/sizeof(int), find);
    // if (check) std::cout << "Yup";
    // else std::cout << "Nah";
    // std::cout << std::endl;

    auto mem = std::lower_bound(arr, arr + sizeof(arr)/sizeof(int), find);
    int indx = mem - arr;
    std::cout << indx << " - Low" << std::endl;

    mem = std::upper_bound(arr, arr + sizeof(arr)/sizeof(int), find);
    indx = mem - arr;
    std::cout << indx << " - Up" << std::endl;

    //std::cout << arr[(arr + 2) - arr];
}
