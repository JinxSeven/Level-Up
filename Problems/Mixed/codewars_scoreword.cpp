#include <string>
#include <iostream>
#include <unordered_map>

std::string highestScoringWord(const std::string &str) {
    int ascii = 0;
    std::string word;
    std::unordered_map<int, std::string>scores;
    for (int x = 0; x <= str.length(); x++) {
        if (isalpha(str[x])) {
            ascii += (str[x] - ('a' - 1));
            word += str[x];
        } else if (isblank(str[x]) || str[x] == '\0') {
            scores.insert({ascii, word});
            word.clear();
            ascii = 0;
        }
    }
    int max = 0;
    for (auto it = scores.begin(); it != scores.end(); it++) {
        if (it->first > max) {
            max = it->first;
        }
    };
    return scores.at(max);
}

int main(int argc, char *argv[]) { std::cout << highestScoringWord("what time are we climbing up the volcano"); }
