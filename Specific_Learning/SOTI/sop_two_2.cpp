#include <bits/stdc++.h>

class Solution {
    private:
        std::unordered_map<std::string,int>mapper;
        std::vector<std::string>out;
    public:
        int invalids(std::string s) {
            std::stack<char>paran;
            for (char x : s) {
                if (x == '(') {
                    paran.push(x);
                } else if (x == ')') {
                    if (!paran.empty() && paran.top() == '(') {
                        paran.pop();
                    } else {
                        paran.push(x);
                    }
                }
            }
            return paran.size();
        }

        void mainfun(std::string s, int inv) {
            if (mapper[s] != 0) {
                return;
            } else {
                mapper[s]++;
            }

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

        std::vector<std::string> removeInvalidParentheses(std::string s) {
            mainfun(s, invalids(s));
            return out;
        }
};

int main() {
    std::string s = "()())()";
    Solution one;
    one.removeInvalidParentheses(s);
}
