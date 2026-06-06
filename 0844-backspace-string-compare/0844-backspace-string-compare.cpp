class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st, tt;

        for (char i: s) {
            if (i=='#') {
                if (!st.empty()) st.pop();
            } else st.push(i);
        }

        for (char i: t) {
            if (i=='#') {
                if (!tt.empty()) tt.pop();
            } else tt.push(i);
        }

        return st==tt;
    }
};