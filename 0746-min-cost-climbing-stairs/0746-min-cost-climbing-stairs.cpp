// class Solution {
// public:
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size();
//         vector<int> dp(n+1,0);

//         for (int i=2;i<=n;i++) {
//             dp[i] = min(cost[i-1]+dp[i-1], cost[i-2]+dp[i-2]);
//         }

//         return dp[n];
//     }    
// };

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int minus_one=0, minus_two=0, curr=0;

        for (int i=2;i<=cost.size();i++) {
            curr = min(cost[i-1]+minus_one, cost[i-2]+minus_two);
            minus_two = minus_one;
            minus_one = curr;
        }

        return curr;
    }
};