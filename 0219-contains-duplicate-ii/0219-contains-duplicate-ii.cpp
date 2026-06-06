class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    //    Brute Force - O(n*k)
    //    int n = nums.size();

    //    for (int i=0;i<n;i++) {
    //     for (int j=i+1; j<=i+k && j<n; j++) {
    //         if (nums[i]==nums[j]) return true;
    //     }
    //    }

    //    return false;

        // HASH MAP SOLN - O(n)
        map<int, int> hash;
        int n = nums.size();
        for (int i=0;i<n;i++) {
            if (hash.count(nums[i]) && i-hash[nums[i]]<=k) return true;

            hash[nums[i]] = i;
        }

        return false;
    }
};