class Solution {
public:
    int missingNumber(vector<int>& v) {
        int ans = -1, n = v.size();
        sort(v.begin(), v.end());
        for (int i = 0; i < n; ++i) {
            if (v[i] != i) {
                ans = i;
                break;
            }
        }
        return ans >= 0? ans : n;
    }
};