class Solution {
public:
    int maxDepth(string s) {
        int n = s.size(), mx = 0;
        stack<char> st;
        for (auto i : s) {
            if (i == '(') { 
                st.push(i);
                int sz = st.size();
                mx = max(mx, sz);
            }
            else if (i == ')') st.pop();
        }
        return mx;
    }
};