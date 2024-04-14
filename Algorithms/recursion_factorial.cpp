#include <iostream>

int factorial(int num) {
    if (num == 1) {
        return num;
    }
    return num * factorial(num - 1);
}

int main() {
    std::cout << factorial(5);
}