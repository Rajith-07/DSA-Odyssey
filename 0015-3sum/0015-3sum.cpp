class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Brute Force - TLE
        // int n = nums.size();
        // set<vector<int>> res;

        // sort(nums.begin(), nums.end());

        // for(int i=0;i<n-2;i++) {
        //     if (i>0 && nums[i]==nums[i-1]) continue;

        //     for (int j=i+1;j<n-1;j++) {
        //         for (int k=j+1;k<n;k++) {
        //             if (nums[i]+nums[j]+nums[k]==0) res.insert({nums[i], nums[j], nums[k]});
        //         }
        //     }
        // }

        // vector<vector<int>> out;
        // for (auto& i: res) out.push_back(i);

        // return out;
        


        // OPTIMIZED ONE
        // int n = nums.size();
        // vector<vector<int>> res;

        // sort(nums.begin(), nums.end());

        // for (int i=0;i<n;i++) {
        //     if (i>0 && nums[i]==nums[i-1]) continue;

        //     int j=i+1;
        //     int k=n-1;

        //     while (j<k) {
        //         int tot = nums[i]+nums[j]+nums[k];

        //         if (tot>0) k--;
        //         else if (tot<0) j++;
        //         else {
        //             res.push_back({nums[i],nums[j],nums[k]});
        //             j++;

        //             while(nums[j]==nums[j-1] && j<k) j++;
        //         }
        //     }
        // }
        // return res;


        int n = nums.size();
        vector<vector<int>> res;

        sort(nums.begin(), nums.end());

        for(int i=0;i<n-2;i++) {
            if (i>0 && nums[i]==nums[i-1]) continue;

            int j=i+1, k=n-1;
            while(j<k) {
                int s = nums[i]+nums[j]+nums[k];
                if (s<0) j++;
                else if (s>0) k--;
                else {
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(nums[j]==nums[j-1] && j<k) j++;
                }
            }
        }

        return res;


    }
};