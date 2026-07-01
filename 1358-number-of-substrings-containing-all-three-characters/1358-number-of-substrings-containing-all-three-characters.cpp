class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int l=0, res=0;
        unordered_map<char, int> store;

        for(int r=0;r<n;r++) {
            store[s[r]]++;

            while (store.size()==3) {
                res += n-r;
                store[s[l]]--;
                if (store[s[l]]==0) store.erase(s[l]);
                l++;
            }
        }
        return res;
        
        // int res = 0;
        // int p[3] = {-1,-1,-1};

        // for (int i=0;i<s.length();i++) {
        //     p[(s[i]&31)-1] = i;
        //     res += min({p[0], p[1], p[2]}) + 1;
        // }
        // return res;
    }
};