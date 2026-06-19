class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_alt = 0, s=0;

        for (int i: gain) {
            s+=i;
            max_alt = max(max_alt, s);
        }

        return max_alt;
    }
};