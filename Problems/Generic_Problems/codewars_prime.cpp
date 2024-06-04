#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    } else {
        for (int w = 2; w*w <= num; w++) {
            if (num % w == 0) {
                return false;
            }
        }
        return true;
    }
}

int main(int argc, char **argv) { std::cout << isPrime(11); }