#include <iostream>
#include <string>

void recursion(int input) {
    if (input < 1) {
        return;
    }
    for (int x = 0; x < input; x++) {
        std::cout << "*";
    }
    std::cout << "\n";
    return recursion(input - 1);
}

int main() {
    int input;
    std::cout << "Enter a Number: ";
    std::cin >> input;

    recursion(input);
}
