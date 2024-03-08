class Solution {
public:
    int maxFrequencyElements(vector<int>& v) {
        map<int, int> mp;
        for (auto i : v) mp[i]++;
        vector<pair<int, int>> vp;
        for (auto i : mp) vp.emplace_back(i.second, i.first);
        sort(vp.rbegin(), vp.rend());
        int mx_frq = vp[0].first;
        for (int i = 1; i < vp.size(); ++i) {
            if (vp[i].first != vp[0].first) {
                return mx_frq;
            }
            mx_frq += vp[i].first;
        }
        return mx_frq;
    }
};