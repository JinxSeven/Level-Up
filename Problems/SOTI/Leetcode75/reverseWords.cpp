#include <bits/stdc++.h>
#include <sstream>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::stringstream ss(s);
        std::stack<std::string>out;
        std::string word;
        while (ss >> word) {
            out.push(word);
        }
        word = "";
        while (out.size() > 0) {
            word += out.top() + " ";
            out.pop();
        }
        return word.substr(0, word.length() - 1);
    }
};

int main() {
    Solution sstream;
    std::cout << sstream.reverseWords("the sky is blue");
}