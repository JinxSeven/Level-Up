#include <bits/stdc++.h>
#include <climits>

int findMinSteps(int num) {
    int dp[num + 1];
    dp[1] = 0;
    for (int x = 2; x <= num; x++) {
        int one = INT_MAX, two = INT_MAX, three = INT_MAX;
        if (x % 3 == 0) {
            one = dp[x / 3];
        }
        if (x % 2 == 0) {
            two = dp[x / 2];
        }
        three = dp[x - 1];
        int min = std::min(one, std::min(two, three));
        dp[x] = min + 1;
    }
    return dp[num];
}

int main(int argc, char **argv) {
    int num;
    std::cin >> num;
    std::cout << "steps to 1 " << findMinSteps(num) << std::endl; 
    return 0;
}

