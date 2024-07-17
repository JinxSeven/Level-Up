#include <iostream>

int main() {
    int m, n, pow, ini;
    std::cin >> m >> n >> pow >> ini;
    int arr[m][n];
    for (int x = 0; x < m; x++) {
        for (int z = 0; z < n; z++) {
            std::cin >> arr[x][z];
        }
    }

    int plr = ini;
    for (int x = 0; x < m; x++) {
        for (int z = 0; z < n; z++) {
            --plr;
            if (arr[x][z] == '.') plr -= 2;
            if (arr[x][z] == '*') plr += 5;
            if (arr[x][z] == '#') continue;
        }
        if (plr < pow) {
            std::cout << "Low on energy! player dead :/" << std::endl;
            break;
        }
    }
    if (plr >= pow) std::cout << "He made it out!'" << plr << std::endl;
}
