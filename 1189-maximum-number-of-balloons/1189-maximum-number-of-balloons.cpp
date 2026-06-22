class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // My soln

        // unordered_map<char, int> freq = {};

        // for (char c: text) {
        //     freq[c]++;
        // }

        // // for (const auto& pair : freq) {
        // //     std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
        // // }

        // // fails in case of chars in balloon that dont make up balloon
        // // balloonaaaaaball

        // string op = "balloon";
        // int cnt = INT_MAX;

        // for (char c: op) {
        //     // cnt = min(cnt, freq[c]);
        //     if (c=='l' || c=='o') {
        //         cnt = min(cnt, freq[c]/2);
        //     } else {
        //         cnt = min(cnt, freq[c]);
        //     }
        // }
        // return cnt;


        // Leetcode solution - hashmap
        // map<char,int> map1;
        // map<char,int> map2;
        // string balloon = "balloon";
        // int res = INT_MAX;

        // for (char c: text) {
        //     map1[c]++;
        // }

        // for (char c: balloon) {
        //     map2[c]++;
        // }

        // for (char c: balloon) {
        //     res = min(res, map1[c]/map2[c]);
        // }

        // return res;


        // Optimized freq count with arr
        // vector<int> cnt(26,0);

        // for (char c: text) {
        //     cnt[c-'a']++;
        // }

        // int res = INT_MAX;

        // res = min(res, cnt['b'-'a']);
        // res = min(res, cnt['a'-'a']);
        // res = min(res, cnt['l'-'a']/2);
        // res = min(res, cnt['o'-'a']/2);
        // res = min(res, cnt['n'-'a']);

        // return res==INT_MAX ? 0: res;


        vector<int> cnt(26,0);

        for (char i: text) cnt[i-'a']++;

        int res = INT_MAX;

        res = min(res, cnt['b'-'a']);
        res = min(res, cnt['a'-'a']);
        res = min(res, cnt['l'-'a']/2);
        res = min(res, cnt['o'-'a']/2);
        res = min(res, cnt['n'-'a']);

        return res==INT_MAX? 0: res;

    }
};