#include <iostream>

#define SIZE 5
int matrix[SIZE][SIZE];

int main() {
    int count = 1;
    for (int x = 0; x < SIZE; x++) {
        for (int z = 0; z < SIZE; z++) {
            matrix[x][z] = count++;
            std::cout << matrix[x][z] << " "; 
        }
    std::cout << std::endl;
    }
    

}
