#include<iostream>
#include<vector>

using namespace std;

class Solution {
    vector<int> positions;
    
public:
    void twoSum(vector<int>& nums, int target) {
        for (int x = 0 ; x < nums.size() ; x++) {
            int temp1 = nums[x];
            for (int j = x + 1; j < nums.size(); j++) {
                int temp2 = nums[j];

            if (temp1 + temp2 == target) {
                positions.push_back(x);
                positions.push_back(j);
                goto the_end;
                }
            }
        }
            the_end:
            //return positions;
            for (int d = 0 ; d < positions.size() ; d++) {
                cout << positions[d];
            }
    }
};

int main() {
    vector<int> nums = {2,7,11,15,6};
    Solution testing;
    testing.twoSum(nums, 13);
}