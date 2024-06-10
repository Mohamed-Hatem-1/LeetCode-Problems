class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected(heights);
        sort(expected.begin(), expected.end());
        int ans = 0, n = expected.size();
        for (int i = 0; i < n; ++i) {
            ans += heights[i] != expected[i] ? 1 : 0;
        }
        return ans;
    }
};