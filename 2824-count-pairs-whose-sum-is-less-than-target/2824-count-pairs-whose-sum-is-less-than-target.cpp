class Solution {
public:
    int countPairs(vector<int>& v, int target) {
        int cnt = 0, n = v.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (v[i] + v[j] < target) cnt++;
            }
        }
        return cnt;
    }
};