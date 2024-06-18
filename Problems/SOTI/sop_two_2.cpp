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

        void mainfun(std::string s, int inv) {
            if (inv < 0) {
                return;
            } else if (inv == 0) {
                if (!invalids(s)) {
                    out.push_back(s);
                }
                return;
            }
            
            for (int x {0}; x < s.length(); x++) {
                std::string one = s.substr(0, x);
                std::string two = s.substr(x+1);
                mainfun(one+two, inv-1);
            } 
            return;            
        }

        void caller(std::string s) {
            mainfun(s, invalids(s));
            for (std::string x : out) {
                std::cout << x << std::endl;
            }
        }
};

int main() {
    std::string s = "()())()";
    Solution one;
    one.caller(s);
}

// class Solution {
//     private:
//         std::unordered_map<std::string,int>mapper;
//         std::vector<std::string>out;
//     public:
//         int invalids(std::string s) {
//             std::stack<char>paran;
//             for (int x = 0; x < s.length(); x++) {
//                 if (s[x] == '(') {
//                     paran.push(s[x]);
//                 } else if (s[x] == ')') {
//                     if (paran.empty()) {
//                         paran.push(s[x]);
//                     } else {
//                         if (paran.top() == '(') {
//                             paran.pop();
//                         }
//                     }
//                     // if (isalpha(s[x])) {
//                     //     continue;
//                     // }
//                 }
//             }
//             return paran.size();
//         }

//         void mainfun(std::string s, int inv) {
//             if (mapper[s] != 0) {
//                 return;
//             } else {
//                 mapper[s]++;
//             }

//             if (inv < 0) {
//                 return;
//             } else if (inv == 0) {
//                 if (!invalids(s)) {
//                     out.push_back(s);
//                 }
//                 return;
//             }
            
//             for (int x {0}; x < s.length(); x++) {
//                 std::string one = s.substr(0, x);
//                 std::string two = s.substr(x+1);
//                 mainfun(one+two, inv-1);
//             } 
//             return;            
//         }

//         std::vector<std::string> removeInvalidParentheses(std::string s) {
//             mainfun(s, invalids(s));
//             // if (out.empty()) { out.push_back(""); };
//             return out;
//         }
// };