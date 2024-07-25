#include <iostream>

long long power(int base, int exponent) {
    if (exponent != 0) {
        return base * power(base, (exponent - 1));
    }
    return 1;
}

int main(int argc, char **argv) { 
    std::cout << power(5, 5); 
}