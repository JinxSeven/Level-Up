#include <iostream>

bool pali_recur(std::string str, int end, int start = 0) {
    //std::cout << str[start] << str[end] << std::endl; 
    if (start >= end) return true;
    if (str[start] != str[end]) return false;
    return pali_recur(str, end - 1, start + 1);
}

int main(int argc, char **argv) {
    std::string str;
    std::cin >> str;
    std::cout << (pali_recur(str, str.length() - 1) ? "pali" : "no-pali") << std::endl;

    return 0;
}