class Solution {
public:
    int arrayPairSum(vector<int>& v) {
        int n = v.size();
        long long ans = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i += 2) {
            ans += min(v[i], v[i + 1]);
        }
        return ans;
    }
};