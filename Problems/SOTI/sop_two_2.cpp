#include <bits/stdc++.h>
//https://github.com/Ayu-99/Love-Babbar-DSA-Cracker-Sheet-Solutions/blob/main/C%2B%2B/Recursion/Remove%20Invalid%20Parentheses.cpp
class Solution {
    private:
        std::unordered_map<std::string,int>mapper;
        std::vector<std::string>out;
    public:
        int invalids(std::string s) {
            std::stack<char>paran;
            for (int x = 0; x < s.length(); x++) {
                if (s[x] == '(') {
                    paran.push(s[x]);
                } else if (s[x] == ')') {
                    if (paran.empty()) {
                        paran.push(s[x]);
                    } else {
                        if (paran.top() == '(') {
                            paran.pop();
                        }
                    }
                    if (isalpha(s[x])) {
                        continue;
                    }
                }
            }
            return paran.size();
        }
};
