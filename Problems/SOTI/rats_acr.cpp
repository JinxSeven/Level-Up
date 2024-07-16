#include <bits/stdc++.h>

int minimHouses(unsigned int r, unsigned int unit, std::vector<unsigned int> arr) {
    if (arr.empty()) return -1;
    int req = r * unit;
    int count = 0, sum = 0, x = 0;
    while (x < arr.size()) {
        sum += arr[x];
        //std::cout << x << " : " << arr[x] << "sum: " << sum << std::endl;
        count++;
        if (sum >= req) return count;
        x++;
    }
    return 0;
}

int main(int argc, char **argv) {
    unsigned int r, unit, size;
    std::vector<unsigned int> arr;
    try {
        std::cin >> r >> unit >> size;
    } catch (const std::exception& err) {
        std::cout << "dont enter negative(-ve) values! " << err.what() << std::endl;
    }
    if (size == 0) return -1;
    arr.resize(size);
    for (int x {0}; x < size; x++) {
        std::cin >> arr[x];
    }
    std::cout << "Min Houses Needed: " << minimHouses(r, unit, arr);
}
