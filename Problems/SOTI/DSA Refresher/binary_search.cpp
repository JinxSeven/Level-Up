#include <bits/stdc++.h>

int binarySearch(char alp[], char key, int size) {
    std::sort(alp, alp + size);
    int s = 0, e = size - 1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (alp[mid] == key) return mid;
        else if (alp[mid] < key) s = mid + 1;
        else e = mid - 1;
    }
    return -1;
}

int main(int argc, char **argv) {
    char alp[] = {'a', 'c', 'e', 'i', 'o', 'p', 'q', 'u', 'w', 'z'};
    int size = sizeof(alp)/sizeof(alp[0]);
    std::cout << binarySearch(alp, 'g', size);
    // for (char x : alp) { std::cout << x << ", "; }
    // std::cout << std::endl;
}
