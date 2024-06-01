#include <iostream>
#include <unordered_map>

void dupedElement(int arr[], int size) {
    std::unordered_map<int, int>mapper(size);
    for (int a {1}; a < size; a++) {
        mapper[a] = 0;
    }
    for (int i = 0; i < size; i++) {
        mapper[arr[i]]++;
    }
    for (auto x = mapper.begin(); x != mapper.end(); x++) {
        if (x->second > 1) {
            std::cout << "Duplicate Element: " << x->first << std::endl;
        } else if (x->second == 0) {
            std::cout << "Missing Element: " << x->first << std::endl;
        }
    }
}

int main() {
    int arr[] = {6,1,2,8,3,4,7,2,10,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    dupedElement(arr, size);
}