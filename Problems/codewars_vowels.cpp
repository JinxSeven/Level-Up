#include <iostream>
#include <string>

char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };
std::string test_state = "unable to resolve configuration with compilerPath";
std::string output;

bool looper;

std::string disemvowel(const std::string& str) {
std::string output;
char vowels[10] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
for (int x = 0 ; x < test_state.length() ; x++) {
    looper = false;
    for (int z = 0 ; z < 10 ; z++) {
        if (test_state[x] == vowels[z]) {
            looper = true;
        }
        }
        if (looper == false) {
            output += test_state[x];
    }
}
    return output;
}

int main() {

    std::cout << disemvowel(test_state);

}