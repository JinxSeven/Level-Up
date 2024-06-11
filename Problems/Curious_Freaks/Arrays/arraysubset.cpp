#include <iostream>
#include <unordered_map>

bool subset(int arr[], int arr2[], int size, int size2) {
    std::unordered_map<int, int>mapper;
    for (int x = 0; x < size; x++) {
            mapper[arr[x]]++;
    }
    for (int x = 0; x < size2; x++) {
        mapper[arr2[x]]--;
    }
    for (auto y = mapper.begin(); y != mapper.end(); y++) {
        if (y->second < 0) {
            return false;
        }
    }
    return true;
}

void final(int arr[], int arr2[], int size, int size2) {
    std::string out = subset(arr, arr2, size, size2) ? "True" : "False";
    std::cout << out << std::endl;
}

int main(int argc, char** argv) {
    int a1[] = {10, 5, 2, 23, 19};
    int a2[] = {19, 5, 3};
    final(a1, a2, 8, 5);
    return 0;
}