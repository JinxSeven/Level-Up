#include <iostream>
#include <string>

bool narcissistic(int value) {
    std::string digi_str = std::to_string(value);
    int digi = digi_str.size();

    int checker = 0;
    int temp = 0;
    int x = 0;
    for (int o = 0; o < digi; o++) {
        temp = digi_str[x] - '0';
        int calc = 1;
        for (int o = 0; o < digi; o++) {
            calc *= temp;
        }
        checker += calc;
        x++;
    }

    if (checker != value) {
        return false;
    }
    return true;
}

int main(int argc, char** argv) { std::cout << narcissistic(153); }