#include <iostream>

class Stairs {
    private:
    int recur(int stair_count) {
        if (stair_count <= 1) return stair_count;
        int minusone = recur(stair_count - 1);
        int minustwo = recur(stair_count - 2);
        return minusone + minustwo;
    }
    public:
    int recursive(int stair_count) { return recur(stair_count + 1); }

    int dynamic(int stair_count) {
        int dp[stair_count + 2];
        dp[0] = 0;
        dp[1] = 1;
        for (int x = 2; x <= stair_count + 1; x++) {
            dp[x] = dp[x - 1] + dp[x - 2];
        }
        return dp[stair_count + 1];
    }
};

int main(int argc, char **argv) {
    int strno;
    std::cin >> strno;
    Stairs one;
    std::cout << "Possible ways 2 climb: " << one.dynamic(strno); 
}
