#include <bits/stdc++.h>

bool palindrome(std::string inp) {
    std::string rev(inp.rbegin(), inp.rend());
    if (inp.std::string::compare(rev) == 0) {
        return true;
    } 
    return false;
}

int main() {
    if (palindrome("racecar")) {
        std::cout << "palindrome";
    } else {
        std::cout << "no palindrome";
    }
}
