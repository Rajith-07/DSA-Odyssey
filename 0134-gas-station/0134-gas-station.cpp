class Solution {
public:
    int canCompleteCircuit(vector<int>& g, vector<int>& c) {
        int stIdx = 0, currGas = 0, totGas = 0;

        for (int i=0;i<g.size();i++) {
            int netGas = g[i]-c[i];

            totGas += netGas;
            currGas += netGas;

            if (currGas<0) {
                stIdx = i+1;
                currGas = 0;
            }
        }

        if (totGas < 0) return -1;
        return stIdx;
    }
};