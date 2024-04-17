#include <iostream>

int factorial(int num) {
    if (num != 1) {
        return num * factorial(num - 1);
    } else {
        return num;
    }
}

int main() {
    std::cout << factorial(5);
}