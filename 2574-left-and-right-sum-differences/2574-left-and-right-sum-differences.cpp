class Solution {
public:
    vector<int> leftRightDifference(vector<int>& v) {
        int n = v.size();
        for (int i = 1; i < n; ++i) v[i] += v[i - 1];
        for (auto i : v) cout << i << " "; cout << "\n";
        vector<int> ans(n);
        for (int i = 0; i < n; ++i) {
            if (i == 0) ans[i] = v[n - 1] - v[i];
            else if (i == n - 1) ans[i] = v[i - 1];
            else ans[i] = abs(v[i - 1] - abs(v[n - 1] - v[i]));
        }
        return ans;
    }
};