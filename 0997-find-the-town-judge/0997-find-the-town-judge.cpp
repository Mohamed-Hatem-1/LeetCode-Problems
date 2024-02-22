class Solution {
public:
    int findJudge(int n, vector<vector<int>>& v) {
        int sz = v.size();
        if (n == 1 && sz < 1) return 1;
        else if (n == 2 && sz < 1) return -1;
        else {
            map<int, int> mp;
            for (int i = 0; i < sz; ++i) {
                mp[v[i][1]]++;
            }
            vector<pair<int, int>> vp;
            for (auto i : mp) vp.emplace_back(i.second, i.first);
            sort(vp.rbegin(), vp.rend());
            if (vp[0].first != n - 1) return -1;
            else {
                for (int i = 0; i < sz; ++i) {
                    if (v[i][0] == vp[0].second) return -1;
                }
                return vp[0].second;
            }
        }
        
    }
};