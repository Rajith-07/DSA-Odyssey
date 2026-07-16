class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int n = s.length();
        // unordered_set<char> seen;
        // int res = 0;

        // int l=0;
        // for (int r=0;r<n;r++) {
        //     while (seen.find(s[r])!=seen.end()) {
        //         seen.erase(s[l]);
        //         l++;
        //     }
        //     seen.insert(s[r]);
        //     res = max(res, r-l+1);
        // }

        // return res;


        // using last index
        unordered_map<char, int> seen;
        int res=0, l=0;

        for (int r=0;r<s.length();r++) {
            if(seen.find(s[r])!=seen.end()) {
                l = max(seen[s[r]]+1,l);
            }

            seen[s[r]] = r;
            res = max(res, r-l+1);
        }

        return res;
    }
};