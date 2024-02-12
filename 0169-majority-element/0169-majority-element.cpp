class Solution {
public:
    int majorityElement(vector<int>& v) {
        int n = v.size();
        map<int, int> mp;
        int mid = n / 2;
        for (int i = 0; i < n; ++i) mp[v[i]]++;
        for (int i = 0; i < n; ++i) {
            if (mp[v[i]] > mid) {
                return v[i];
            }
        }
        return 0;
    }
};