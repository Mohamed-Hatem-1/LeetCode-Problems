class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& v, int k) {
        int n = v.size();
        map<int, int> mp;
        for (int i = 0; i < n; ++i) mp[v[i]]++;
        vector<pair<int, int>> vp;
        for (auto i : mp) vp.emplace_back(i.second, i.first);
        sort(vp.begin(), vp.end());
        int sz = vp.size();
        for (int i = 0; i < sz; ++i) {
            if (k > vp[i].first) k -= vp[i].first;
            else {
                vp[i].first -= k;
                if (vp[i].first > 0) return sz - i;
                else return sz - i -1;
            }
        }
        return 1;
    }
};