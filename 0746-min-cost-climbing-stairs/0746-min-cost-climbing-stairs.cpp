class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int minus_one=0, minus_two=0, curr=0;

        for (int i=2;i<=cost.size();i++) {
            curr = min(cost[i-1]+minus_one, cost[i-2]+minus_two);
            minus_two = minus_one;
            minus_one = curr;
        }

        return curr;
    }
};