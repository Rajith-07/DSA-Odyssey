class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();

        long long mx = 0, mn = LLONG_MAX;

        for (int i: nums) {
            if (i>mx) mx = i;
            if (i<mn) mn = i;
        }

        return (mx-mn)*k;
    }
};