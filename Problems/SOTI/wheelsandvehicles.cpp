#include <iostream>

int main(int argc, char **argv) {
    int v, w;
    std::cin >> v >> w;
    if (!w >= 2 or w % 2 != 0 or v > w) {
        std::cerr << "Invalid Input" << std::endl;
    }
    float x = ((4 * v) - w) / 2;
    std::cout << "TW: " << x << std::endl;
    std::cout << "FW: " << v - x << std::endl;
}
