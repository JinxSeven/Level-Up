#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::vector<int>>brute(std::vector<int>& nums, int target) {
        int size = nums.size();
        std::set<std::vector<int>>out;
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                for (int low = j + 1; low < size; low++) {
                    for (int high = low + 1; high < size; high++) {
                        long long sum = (long long) nums[i] + nums[j] + nums[low] + nums[high];
                        if (sum == target) {
                            out.insert({nums[i], nums[j], nums[low], nums[high]});
                        } 
                    }
                }
            }
        }
        std::vector<std::vector<int>> output(out.begin(), out.end());
        return output;
    }

    std::vector<std::vector<int>>optimal(std::vector<int>& nums, int target) {
        int size = nums.size();
        std::vector<std::vector<int>>output;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < size; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i+1; j < size; j++) {
                if (j > i+1 && nums[j] == nums[j - 1]) continue;
                int low = j+1, high = size-1;
                while (low < high) {
                    long long sum = (long long) nums[i] + nums[j] + nums[low] + nums[high];
                    if (sum == target) {
                        output.push_back({nums[i], nums[j], nums[low], nums[high]});
                        low++; high--;
                        while (low < high && nums[low] == nums[low-1]) low++;
                        while (low < high && nums[high] == nums[high+1]) high--;
                    } else if (sum < target) low++;
                    else high--;
                }
            }
        }
        return output;
    }
};

int main(int argc, char **argv) {
    int size = 6, target = 0;
    std::vector<int>nums = {-3,-2,-1,0,0,1,2,3};
    std::vector<std::vector<int>>result;
    Solution run;
    result = run.optimal(nums, target);
    for (const auto& quad : result) {
        for (int num : quad) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}
