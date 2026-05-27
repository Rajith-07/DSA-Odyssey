class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> seen;

        for (int i=0;i<n;i++) {
            int curr = nums[i];
            int comple = target - curr;

            if (seen.count(comple)) {
                return {seen[comple], i};
            }

            seen[curr] = i;
        }

        return {};
    }
};