#include <bits/stdc++.h>

std::vector<std::vector<int>>threeSumOpt(std::vector<int>vals, int trgt) {
    std::vector<std::vector<int>>output;
    std::sort(vals.begin(), vals.end());
    for (int x = 0; x < vals.size(); x++) {
        if (x > 0 && vals[x] == vals[x-1]) continue;
        int low = x + 1, high = (vals.size() - 1);
        while (low < high) {
            long long sum = vals[x] + vals[low] + vals[high];
            if (sum == trgt) {
                output.push_back({vals[x], vals[low], vals[high]});
                low++; high--; 
                while (low < x+1 && vals[low] == vals[low-1]) low++;
                while (high < (vals.size() - 1) && vals[high] == vals[high+1]) high--;
            }
            else if (sum < trgt) low++;
            else high--;
        }
    }
    return output;
}
// [0,0,0,0]
int main() {
    std::vector<int> nums = {0,0,0,0};
    std::vector<std::vector<int>> result = threeSumOpt(nums, 0);
    for (const auto& triplet : result) {
        for (int num : triplet) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
