#include <iostream>
#include <vector>
#include <set>

std::vector<char>uniqueorder(std::string input) {
    std::set<char>unique;

    for (char x : input) unique.insert(x);
        std::vector<char>output(unique.begin(), unique.end());

    return output;
}

void viewvec(std::vector<char>output) {
    for (char x : output) std::cout << x;
    std::cout << std::endl;
}

int main() {
    viewvec(uniqueorder("ADSSAFASAVDVDV"));
}