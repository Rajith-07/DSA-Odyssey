class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        // int n = costs.size();
        // int mx_bars = 0, curr_bars = 0;
        // int l = 0, cost = 0;

        // sort(costs.begin(), costs.end());

        // for (int r=0;r<n;r++) {
        //     while(cost>coins) {
        //         cost-=costs[l];
        //         l++;
        //         curr_bars--;
        //     }

        //     cost+=costs[r];
        //     curr_bars++;
        //     mx_bars = max(mx_bars, curr_bars);
        // }

        // return mx_bars;

        sort(costs.begin(), costs.end());

        for (int i=0;i<costs.size();i++) {
            coins -= costs[i];

            if (coins<0) return i;
        }

        return costs.size();
    }
};