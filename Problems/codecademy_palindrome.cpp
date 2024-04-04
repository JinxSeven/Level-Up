#include <iostream>
#include <string>

void pali(std::string data) {
    std::string chkr;
    int match;
    int j = 0;
    for (int x = (data.length() - 1); x >= 0; x--) {
        chkr += data[x];
    }
    if (data == chkr) {
        std::cout << "The reversed string is '" << chkr << "' and is a palindrome\n";
    }
    else {
        std::cout << "The reversed string is '" << chkr << "' and is not a palindrome\n";
    }
}

int main() {
    pali("malayalam");
}
