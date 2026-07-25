class Solution {
public:
    int maxProduct(int n) {
        int x=0, y=0;

        for (; n; n/=10) {
            int d = n%10;
            if (d>=x) {
                y=x;
                x=d;
            } else if (d>y) {
                y=d;
            }
        }

        return x*y;
    }
};