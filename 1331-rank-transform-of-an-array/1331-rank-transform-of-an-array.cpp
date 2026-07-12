class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> a2 = arr;

        sort(a2.begin(), a2.end());

        unordered_map<int, int> ranks;
        int rank = 1;

        for(int i: a2) {
            if (ranks.find(i)==ranks.end()) ranks[i] = rank++;
        }

        vector<int> res;
        for (int i: arr) {
            res.push_back(ranks[i]);
        }

        return res;
    }
};