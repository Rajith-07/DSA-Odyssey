class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int inc = k;

        for (int i=0;i<nums.size();i++) {
            if (nums[i]==inc) inc += k;
        }

        return inc;
    }
};