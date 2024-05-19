class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& v) {
        int n = v.size();
        vector<int> copy(v);
        vector<string> ans(n);
        sort(copy.rbegin(), copy.rend());
        for (auto i : copy) cout << i << " "; cout << "\n";
        map<int, string> mp;
        for (int i = 0; i < n; ++i) {
            if (i == 0) mp[copy[i]] = "Gold Medal";
            else if (i == 1) mp[copy[i]] = "Silver Medal";
            else if (i == 2) mp[copy[i]] = "Bronze Medal";
            else {
                string str = to_string(i + 1);
                mp[copy[i]] = str;
            }
        }
        for (int i = 0; i < n; ++i) {
            ans[i] = mp[v[i]];
        }
        return ans;
    }
};