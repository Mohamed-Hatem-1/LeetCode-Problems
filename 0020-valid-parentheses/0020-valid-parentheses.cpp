class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        for (int i = 0; i < n; ++i) {
            if (st.empty()) {
                if (s[i] == ')' || s[i] == ']' ||s[i] == '}') return false;
                else st.push(s[i]);
            } else {
                if (s[i] == '(' || s[i] == '[' ||s[i] == '{') st.push(s[i]);
                else {
                    if (s[i] == ')') {
                        if (st.top() == '(') st.pop();
                        else return false;
                    } else if (s[i] == ']') {
                        if (st.top() == '[') st.pop();
                        else return false;
                    } else {
                        if (st.top() == '{') st.pop();
                        else return false;
                    }
                }
            }
        }
        return st.empty();
    }
};