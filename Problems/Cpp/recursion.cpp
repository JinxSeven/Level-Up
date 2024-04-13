#include <iostream>
#include <string>

void recursion(int input);

int main() {
    int input;
    std::cout << "Enter a Number: ";
    std::cin >> input;

    recursion(input);
}

void recursion(int input) {

    if (input < 0) {
    return;
    }

    recursion(input - 1);
    std::cout << input;

    for (int x = 0 ; x < input ; x++) {
        std::cout << "*";
    }

    std::cout << "\n";
}