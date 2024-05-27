class Solution {
public:
    int specialArray(vector<int>& v) {
        sort(v.begin(), v.end());
        int n = v.size();
        for (int i = 0; i <= n; ++i) {
            auto j = lower_bound(v.begin(), v.end(), i);
            int inx = j - v.begin();
            int temp = n - inx;
            if (temp == i) {
                return i;
            }
        }
        return -1;
    }
};