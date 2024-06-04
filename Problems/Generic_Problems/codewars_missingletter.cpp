#include <iostream>
#include <vector>

char findMissingLetter(const std::vector<char>& chars) {
    int value_one, value_two, indx;
    for (int x = 0; x < chars.size(); x++) {
        value_one = chars[x];
        value_two = chars[x + 1];
        if ((value_two - value_one) != 1) {
            indx = x;
            break;
        }
    }
    return chars[indx] + 1;
}

int main(int argc, char* argv[]) {
    std::vector<char> avec = {'a', 'c', 'd', 'e', 'f'};
    std::cout << findMissingLetter(avec);
}