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

    // counter clock wise
    // for (int x {0}; x < n; x++) {
    //     int lft = 0, ryt = n - 1;
    //     while (lft < ryt) {
    //         std::swap(arr[x][lft], arr[x][ryt]);
    //         lft++;
    //         ryt--;
    //     }
    // }

    // clock wise
    for (int x {0}; x < n; x++) {
        int top = 0, btm = n - 1;
        while (top < btm) {
            std::swap(arr[top][x], arr[btm][x]);
            top++;
            btm--;
        }
    }

    for (int x {0}; x < n; x++) {
        for (int z {0}; z < n; z++) {
            if (x < z) std::swap(arr[x][z], arr[z][x]);
        }
    }

    for (int x {0}; x < n; x++) {
        for (int y {0}; y < n; y++) {
            std::cout << arr[x][y] << "\t";
        }
        std::cout << std::endl;
    }
}
