#include <iostream>

int gcd(int x, int y) {
    if (x == 0) {
        return y;
    } else if (y == 0) {
        return x;
    } else if (x == y) {
        return x;
    } else {
        if (x > y) {
            return gcd(x-y, y);
        } else {
            return gcd(x, y-x);
        }
    }
}

