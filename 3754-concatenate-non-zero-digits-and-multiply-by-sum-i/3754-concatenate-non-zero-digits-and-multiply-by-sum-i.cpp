class Solution {
public:
    long long sumAndMultiply(int n) {
        long long s=0;
        string x="";

        string n_str =  to_string(n);
        for (char i: n_str) {
            if (i!='0') {
                x+=i;
                s+=(i-'0');
            }
        }
        
        if (x.empty()) return 0;

        return stoll(x)*s;
    }
};