#include <iostream>

int main(int argc, char **argv) {
    int n, value = 1;
    std::cin >> n;
    int arr[n][n];
    for (int x {0}; x < n; x++) {
        for (int y {0}; y < n; y++) {
            arr[x][y] = value;
            ++value;
        }
    }

    for (int x {0}; x < n; x++) {
        for (int y {0}; y < n; y++) {
            std::cout << arr[x][y] << "\t";
        }
        std::cout << std::endl;
    }

    for (int x {0}; x < n; x++) {
        int lef = 0, ryt = n - 1;
        while (lef < ryt) {
            std::swap(arr[x][lef], arr[x][ryt]);
            
        }
    }
}
