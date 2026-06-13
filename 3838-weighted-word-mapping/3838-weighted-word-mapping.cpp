class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        // string res;
        // res.reserve(words.size());
        
        // for (int i=0;i<words.size();i++) {
        //     int wordweight = 0;
        //     for (int j=0;j<words[i].size();j++) {
        //         wordweight += (int)weights[words[i][j] - 'a'];
        //     }
        //     res.push_back((char)(wordweight + 25)%26);
        // }

        // return res;


        string res="";

        for (string& word: words) {
            int tot = 0;

            for (char c: word) {
                tot += weights[c-'a'];
            }

            int r = tot % 26;

            char x = 'z' - r;
            res += x;
        }
        return res;
    }
};