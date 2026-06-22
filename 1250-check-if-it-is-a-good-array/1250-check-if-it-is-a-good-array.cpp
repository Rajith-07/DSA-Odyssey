class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int res = nums[0];
        for (int x: nums) res = gcd(res, x);
        return res == 1;
    }
};