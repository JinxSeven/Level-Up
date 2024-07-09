#include <bits/stdc++.h>
//#include <ctype.h>

int main(int argc, char **argv) {
    std::string one = "{SUS-[023968]-SUS}";
    std::string two;
    int nums;
    for (int x {0}; x < one.length(); x++) {
        char tmp = one[x];
        if (isdigit(tmp)) {
            two += tmp;
        }
    }
    int arr[two.length()];
    for (int x {0}; x < two.length(); x++) {
        char q = two[x];
        arr[x] = q - '0';
        std::cout << x << ":" << arr[x] << std::endl;
    }
}
