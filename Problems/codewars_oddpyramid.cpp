#include <iostream>

long long rowSumOddNumbers(unsigned n){
    int prev = 0;
    int indx = 0;
    for (int x = 0; x < n; x++) {
        prev += x;
    }
    int odds[prev + n];
    for (int x = 1; x < ((prev + n) * 2); x += 2) {
        odds[indx] = x;
        indx++;
    }
    int result = 0;
    for (int z = prev; z < prev + n; z++) {
        result += odds[z];
    }
    return result;
}

int main() { std::cout << rowSumOddNumbers(42); }