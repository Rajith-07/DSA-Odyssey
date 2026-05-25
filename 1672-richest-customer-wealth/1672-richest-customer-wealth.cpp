class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;

        for (int i=0;i<accounts.size();i++) {
            int acc_tot = 0;
            for (int j=0;j<accounts[0].size();j++) {
                acc_tot += accounts[i][j];
            }
            max_wealth = max(max_wealth, acc_tot);
        }

        return max_wealth;
    }
};