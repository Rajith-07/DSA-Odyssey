class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        int writePos = 0;

        for (int readPos = 1; readPos<nums.size(); readPos++) {
            if (nums[readPos]!=nums[writePos]) {
                writePos++;
                nums[writePos] = nums[readPos];
            }
        }
        return writePos+1;
    }
};