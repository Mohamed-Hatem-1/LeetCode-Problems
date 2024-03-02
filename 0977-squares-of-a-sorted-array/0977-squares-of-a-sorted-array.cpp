class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        int n = v.size();
        vector<int> ans(n);
        int l = 0, r = n - 1;
        for (int i = n - 1; i >= 0; --i) {
            if (abs(v[r]) > abs(v[l])) ans[i] = v[r] * v[r--];
            else ans[i] = v[l] * v[l++];
        }
        return ans;
    }
};