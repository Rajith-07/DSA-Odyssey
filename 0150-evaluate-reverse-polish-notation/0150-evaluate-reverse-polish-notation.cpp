class Solution {
public:
    bool isop(string s) {
        if (s=="+" || s=="-" || s=="*" || s=="/") return true;
        return false;
    }

    int operate(int a, int b, string op) {
        if (op == "+") return b+a;
        else if (op == "-") return b-a;
        else if (op == "*") return b*a;
        return b/a;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (const string& i: tokens) {
            if (!isop(i)) s.push(stoi(i));
            else {
                int a = s.top(); s.pop();
                int b = s.top(); s.pop();

                int res = operate(a,b,i);
                s.push(res);
            }
        }

        return s.top();
    }
};