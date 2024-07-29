#include <iostream>

int main(int argc, char **argv) {
    int inp;
    std::cin >> inp;
    int dp[inp+1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= inp; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    std::cout << dp[inp] << std::endl; 
}
