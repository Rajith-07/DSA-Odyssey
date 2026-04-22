class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        int l=0;
        int h=n-1;

        while(l<=h) {
            int mid = (l+h)/2;
            int midel = nums[mid];

            if (midel==target) return mid;
            else if (midel > target) {
                h = mid-1;
            } else if(midel < target) {
                l = mid+1;
            }
        }

        return l;
    }
};