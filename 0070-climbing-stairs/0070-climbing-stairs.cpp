// class Solution {
// public:
//     vector<int> dp;
//     int climbStairs(int n) {
//         dp.resize(n, -1);
//         return dfs(0,n);
//     }

//     int dfs(int i, int n) {
//         if (i>=n) return i==n;
//         if (dp[i]!=-1) return dp[i];

//         return dp[i] = dfs(i+1, n) + dfs(i+2, n);
//     }
// };

class Solution {
public:
    int climbStairs(int n) {
        if (n<=2) return n;

        vector<int> dp(n+1);
        dp[1] = 1;
        dp[2] = 2;

        for (int i=3;i<=n;i++) {
            dp[i] = dp[i-1]+dp[i-2];
        }

        return dp[n];
    }
};