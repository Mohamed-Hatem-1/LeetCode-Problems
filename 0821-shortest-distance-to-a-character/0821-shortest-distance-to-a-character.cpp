class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> ans(n);
        for (int i = 0; i < n; ++i) {
            if (s[i] == c) ans[i] = 0;
            else {
                int j = i, k = i;
                while (j < n) {
                    if (s[j] == c) break;
                    else j++;
                }
                while (k >= 0) {
                    if (s[k] == c) break;
                    else k--;
                }
                if (j == n) ans[i] = abs(i - k);
                else if (k == -1) ans[i] = abs(i - j);
                else ans[i] = min(abs(i - j), abs(i - k));
            }
        }
        return ans;
    }
};