class Solution {
public:
    int numIdenticalPairs(vector<int>& v) {
        int n = v.size();
        int cnt = 0;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (v[i] == v[j]) cnt++;
            }
        }
        return cnt;
    }
};