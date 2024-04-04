#include <iostream>
#include <string>

int main() {
    int height;
    
    do {
        std::cout << "Height: ";
        std::cin >> height;
    } while (height < 1);

    for (int x = 0 ; x < height ; x++) {
        for (int z = 0 ; z < height; z++) {
            if (z < (height - x - 1)) {
            std::cout << " ";
            }
            else {
                std::cout << "#";
            }
        }
        std::cout << "\n";
    }
}
