#include <bits/stdc++.h>

bool validParan(std::string input) {
    std::stack<char> syntaxx;
    for (int x {0}; x < input.length(); x++) {
        if (input[x] == '(' || input[x] == '{' || input[x] == '[') {
            syntaxx.push(input[x]);
        }
        else {
            if (syntaxx.empty()) return false;
            char temp = input[x];
            switch (temp) {
                case ')':
                    if (syntaxx.top() == '(') syntaxx.pop();
                    else return false;
                case ']':
                    if (syntaxx.top() == '[') syntaxx.pop();
                    else return false;
                case '}':
                    if (syntaxx.top() == '{') syntaxx.pop();
                    else return false;
            }
        }
    }
    if (syntaxx.empty()) return true;
    return false;
}

int main(int argc, char **argv) {
    std::string testcase = "({[]})";
    std::cout << validParan(testcase);
}
