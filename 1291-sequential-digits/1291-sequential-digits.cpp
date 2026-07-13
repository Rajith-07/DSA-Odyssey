class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> res;

        string l = to_string(low);
        string h = to_string(high);

        for (int i=l.size(); i<=h.size();i++) {
            for (int j=0;j<=9-i;j++) {
                string n = s.substr(j,i);
                int num = stoi(n);
                if (num>=low && num<=high) res.push_back(num);
            }
        }

        return res;
    }
};