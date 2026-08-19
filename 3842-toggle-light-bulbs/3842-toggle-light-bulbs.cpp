class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int, int> mp;

        for (int i: bulbs) mp[i]++;

        vector<int> res;

        for (auto i: mp) {
            if (i.second%2) res.push_back(i.first);
        }

        sort(res.begin(), res.end());
        return res;


    }
};