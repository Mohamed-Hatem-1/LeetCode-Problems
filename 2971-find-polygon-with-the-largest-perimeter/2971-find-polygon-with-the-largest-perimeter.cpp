class Solution {
public:
    long long largestPerimeter(vector<int>& v) {
        int n = v.size();
        sort(v.begin(), v.end());
        vector<long long> prx(n);
        for (int i = 0; i < n; ++i) prx[i] = v[i];
        sort(prx.begin(), prx.end());
        for (int i = 1; i < n; ++i) prx[i] += prx[i - 1];
        for (int i = n - 1; i >= 0; --i) {
            if (i == 2) {
                if (v[i] < prx[i - 1]) {
                return prx[i];
                }
            } else if (i < 2) {
                return -1;
            } else {
                if (v[i] < prx[i - 1]) {
                return prx[i];
                }
            }
        }
        return -1;
    }
};