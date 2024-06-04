#include <iostream>

int multiples(int number) {
    int total = 0;
    for (int i = 0; i < number; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            total += i;
            std::cout << i << "  " << total << std::endl;
        }
    }
    return total;
}

int main(int argc, char **argv) { std::cout << multiples(10); }