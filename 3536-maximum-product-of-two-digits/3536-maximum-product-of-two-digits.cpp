class Solution {
public:
    int maxProduct(int n) {
        // int x=0, y=0;

        // for (; n; n/=10) {
        //     int d = n%10;
        //     if (d>=x) {
        //         y=x;
        //         x=d;
        //     } else if (d>y) {
        //         y=d;
        //     }
        // }

        // return x*y;

        uint64_t m = 0;
        for (;n;n/=10) {
            m += 1ULL << (n%10 << 2); // n%10 * 4
        }

        int u = (bit_width(m)-1) >> 2; // highest set bit value -> /4 gives the req digit
        return u * ((bit_width(m - (1ULL << (u<<2))) - 1) >> 2);
    }
};