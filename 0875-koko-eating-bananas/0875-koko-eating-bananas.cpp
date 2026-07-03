class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // Brute Force
        // int speed = 1;

        // while (true) {
        //     long long tot = 0;
        //     for (int pile: piles) tot += (pile+speed-1)/speed;
        //     if (tot<=h) return speed;
        //     speed++;
        // }



        // OPTIMAL - Binary Search
        // As speed & tot hrs are inversely proportional, & it lies between 1 & max_arr_el
        int n = piles.size();
        int l=1, r=*max_element(piles.begin(), piles.end());

        while(l<r) {
            long long tot = 0;
            int mid = l+(r-l)/2;

            for (int pile: piles) tot+=(pile+mid-1)/mid;

            if (tot<=h) r = mid;
            else l = mid+1;
        }

        return l;
    }
};