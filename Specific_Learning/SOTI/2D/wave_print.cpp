#include <iostream>
#include <iomanip>

int main(int argc, char **argv) {
    int rows, cols, num = 1;
    std::cin >> rows >> cols;
    int arr[rows][cols];

    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < cols; y++) {
            arr[x][y] = num;
            ++num;
        }
    }

    // for (int x = 0; x < rows; x++) {
    //     for (int y = 0; y < cols; y++) {
    //         std::cout << arr[x][y] << "\t";
    //     }
    //     std::cout << std::endl;
    // }

    int switcher = 0;
    for (int x = 0; x < cols; x++) {
        if (switcher == 0) {
            for (int y = 0; y < rows; y++) {
                std::cout << arr[y][x] << " ";
            }
        } else {
            for (int y = rows-1; y >= 0; y--) {
                std::cout << arr[y][x] << " ";
            }
        }
        switcher = (switcher + 1) % 2;
    }
}
