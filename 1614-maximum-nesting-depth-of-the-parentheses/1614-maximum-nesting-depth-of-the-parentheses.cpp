class Solution {
public:
    int maxDepth(string s) {
        int res = 0;
        int mx = 0;
        for (char i: s) {
            if (i=='(') {
                res++;
                mx = max(mx, res);
            }
            else if (i==')') res--;
        }

        return mx;
    }
};