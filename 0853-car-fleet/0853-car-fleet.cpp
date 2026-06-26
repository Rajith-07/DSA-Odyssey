class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> car;

        for (int i=0;i<n;i++) car.push_back({position[i], speed[i]});

        sort(car.rbegin(), car.rend()); // sort in descending order

        vector<double> res;

        for (int i=0;i<n;i++) {
            double time = (double)(target-car[i].first)/car[i].second;

            if (res.empty() || time>res.back()) res.push_back(time);
        }

        return res.size();
    }
};