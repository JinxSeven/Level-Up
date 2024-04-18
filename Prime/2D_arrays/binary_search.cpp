#include <iostream>

#define SIZE 5
int matrix[SIZE][SIZE];

int main() {
    int count = 1;
    for (int x = 0; x < SIZE; x++) {
        for (int z = 0; z < SIZE; z++) {
            matrix[x][z] = count++;
        }
    }
    
    int target;
    std::cin >> target;

    int row = sizeof(matrix) / sizeof(matrix[0]);
    int col = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int start = 0;
    int end = (row * col) - 1; 
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        int x = mid / col;
        int z = mid % col;

        if (matrix[x][z] > target) {
            end = mid - 1;
        }
        else if (matrix[x][z] < target) {
            start = mid + 1; 
        }
        else {
            std::cout << "True\n";
            return 0;
        }
    }
    std::cout << "False\n";
}
