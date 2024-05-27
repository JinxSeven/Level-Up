#include <iostream>
#include <cmath>

long long largestPrimeFactor(long long n) {
    long long largest_factor = 1;
    long long factor = 2;

    // Divide n by 2 until it is odd
    while (n % factor == 0) {
        largest_factor = factor;
        n /= factor;
    }

    // Check for odd factors from 3 onwards
    factor = 3;
    long long max_factor = static_cast<long long>(sqrt(n)) + 1;
    while (factor <= max_factor) {
        while (n % factor == 0) {
            largest_factor = factor;
            n /= factor;
            max_factor = static_cast<long long>(sqrt(n)) + 1;
        }
        factor += 2;
    }

    // If n is still greater than 1, then n itself is a prime factor
    if (n > 1) {
        largest_factor = n;
    }

    return largest_factor;
}

int main() {
    long long number = 600851475143;
    std::cout << "The largest prime factor of " << number << " is " << largestPrimeFactor(number) << std::endl;
    return 0;
}
