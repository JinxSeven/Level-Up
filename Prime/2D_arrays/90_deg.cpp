#include <iostream>
#include <algorithm>

#define SIZE 4
char og_array[SIZE][SIZE];

void ninetyDeg() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            char temp = og_array[i][j];
            og_array[i][j] = og_array[j][i];
            og_array[j][i] = temp;
        }
    }

    for (int i =0; i < SIZE; i++) {
        for (int j = 0; j < SIZE/2; j++) {
            char temp = og_array[i][j];
            og_array[i][j] = og_array[i][SIZE - 1 - j];
            og_array[i][SIZE - 1 - j] = temp;
        }
    }
}

int main() {

    char value = 'a';
    for (int x = 0; x < (SIZE); x++) {
        for (int z = 0; z < (SIZE); z++) {
            og_array[x][z] = value++;
        }
    }

    std::cout << "Before:\n"; 
    for (int x = 0; x < (SIZE); x++) {
        for (int z = 0; z < (SIZE); z++) {
            std::cout << og_array[x][z] << " ";
        }
        std::cout << std::endl;
    }

    ninetyDeg();

    std::cout << "After:\n"; 
    for (int x = 0; x < (SIZE); x++) {
        for (int z = 0; z < (SIZE); z++) {
            std::cout << og_array[x][z] << " ";
        }
        std::cout << std::endl;
    }
}