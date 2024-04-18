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
    
    int row = sizeof(matrix) / sizeof(matrix[0]);

}
