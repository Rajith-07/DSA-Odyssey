class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        /*
        Intuition: There should be a path exisitng among the items in queries[i]
        group the nodes into islands first
        */
        vector<int> island(n);
        island[0] = 0;

        for (int i=1;i<n;i++) {
            if (abs(nums[i-1]-nums[i])<=maxDiff) island[i] = island[i-1];
            else island[i]=island[i-1]+1;
        }

        vector<bool> res;

        for (auto& q: queries) {
            if (q[0]==q[1]) {
                res.push_back(true);
            } else {
                if (island[q[0]]==island[q[1]]) res.push_back(true);
                else res.push_back(false);
            }
        }

        return res;
    }
};