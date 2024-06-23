#include <bits/stdc++.h>

class PermutationInString {
public:
    bool finalJudge(std::string s1, std::string s2sub) {
        std::unordered_map<char, int>mapper;
        for (int i = 0; i < s1.size(); i++) {
            mapper[s1[i]]++;
            mapper[s2sub[i]]--;
        }
        for (const auto& x : mapper) {
            if (x.second != 0) return false;
        }
        return true;
    }

    bool checkInclusion(std::string s1, std::string s2) {
        int len1 = s1.size(), len2 = s2.size();
        // if (len1 == len2) {
        //     if(finalJudge(s1, s2)) return true;
        // }
        for (int i = 0; i <= len2 - len1; i++) {
            std::string s2sub = s2.substr(i, len1);
            if (finalJudge(s1, s2sub)) return true;
        }
        return false;
    }
};

int main(int argc, char* argv[]) {
    PermutationInString testOne;
    if (testOne.checkInclusion("adc", "dcda")) std::cout << "found\n";
    else std::cout << "not found\n";
}
