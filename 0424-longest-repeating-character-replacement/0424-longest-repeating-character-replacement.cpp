class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0, l=0, maxFreq=0;
        unordered_map<char, int> freq;

        for (int r=0;r<s.length();r++) {
            maxFreq = max(maxFreq, ++freq[s[r]]);

            while(((r-l+1)-maxFreq)>k) {
                freq[s[l]]--;
                l++;
            }

            res = max(res, r-l+1);
        }

        return res;
    }
};