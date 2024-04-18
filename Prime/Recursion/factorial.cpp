#include <iostream>

int factorial(int num) {
    if (num < 2) {
        return num;
    }
    return num * factorial(num - 1);
}

int main(int argc, char **argv) { std::cout << factorial(5); }