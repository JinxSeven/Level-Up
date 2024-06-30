#include <bits/stdc++.h>
#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelfSlow(std::vector<int>& nums) {
        std::vector<int>answer;
        for (int q {0}; q < nums.size(); q++) {
            int w = 0;
            int product = 1;
            while (w < nums.size()) {
                if (w == q) w++;
                if (w == nums.size()) break;
                product *= nums[w];
                w++;
            }
            answer.push_back(product);
        }
        return answer;
    }

        std::vector<int> productExceptSelfBetter(std::vector<int>& nums) {
            int sfx[nums.size()], pfx[nums.size()];
            pfx[0] = 1;
            sfx[nums.size()-1] = 1;
            for (int x = 1; x < nums.size(); x++) {
                pfx[x] = nums[x-1] * pfx[x-1]; 
            }
            for (int x = 0; x < nums.size()-1; x++) {
                int j = x + 1;
                int product = 1;
                while (j < nums.size()) {
                    product *= nums[j];
                    j++;
                }
                sfx[x] = product;
            }
            for (int x = 0; x < nums.size(); x++) {
                nums[x] = sfx[x] * pfx[x];
            }
            return nums;
        }

        std::vector<int> productExceptSelf(std::vector<int>& nums) {
            int sfx[nums.size()], pfx[nums.size()];
            pfx[0] = 1;
            sfx[nums.size()-1] = 1;
            for (int x = 1; x < nums.size(); x++) {
                pfx[x] = nums[x-1] * pfx[x-1]; 
            }
            for (int x = nums.size() - 2; x >= 0; x--) {
                sfx[x] = sfx[x+1] * nums[x+1];
            }
            for (int x = 0; x < nums.size(); x++) {
                nums[x] = sfx[x] * pfx[x];
            }
            return nums;
    }
};

int main(int argc, char* argv[]) {
    std::vector<int>nums = {-1,1,0,-3,3};
    Solution pointers;
    std::vector<int>output = pointers.productExceptSelf(nums);
    for (auto out : output) {
        std::cout << out << " ";
    }
    std::cout << "\n";
}

//total product / excluded index value
