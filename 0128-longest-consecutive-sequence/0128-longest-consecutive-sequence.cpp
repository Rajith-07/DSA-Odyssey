class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        
        // for (int i: nums) cout << i << " ";

        int res = 1, cnt = 1;

        for (int i=1;i<nums.size();i++) {
            if (nums[i]-nums[i-1]<1) cnt = cnt;
            else if (nums[i]-nums[i-1]==1) cnt++;
            else {
                res = max(res, cnt);
                cnt = 1;
            }
        }

        return max(res, cnt);
    }
};