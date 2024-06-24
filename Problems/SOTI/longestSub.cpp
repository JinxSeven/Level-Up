#include <bits/stdc++.h>

class LongestSubstring {
public:
    int longestSubstringLength(std::string s) {
        int ans = 0;
        if (s.empty() or s.length() == 0) return 0;
        std::set<char>substr;
        for (int i {0}, j {0}; i < s.length(); i++) {
            if (substr.find(s[i]) == substr.end()) substr.insert(s[i]);
            else {
                while ((substr.find(s[i]) != substr.end())) {
                    substr.erase(s[j]);
                    j++;
                }
                substr.insert(s[i]);
            }
            ans = std::max(ans, i - j + 1);
        }
        return ans;
    }
};