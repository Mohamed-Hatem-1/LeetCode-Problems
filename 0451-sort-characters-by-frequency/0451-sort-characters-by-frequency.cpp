class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        int n = s.size();
        for (int i = 0; i < n; ++i) mp[s[i]]++;
        vector<pair<int, char>> vp;
        for (auto i : mp) {
            vp.emplace_back(i.second, i.first);
        }
        sort(vp.rbegin(), vp.rend());
        string ans = "";
        for (auto i : vp) {
    //        cout << i.first << " " << i.second << "\n";
            int tt = i.first;
            for (int j = 0; j < tt; ++j) ans += i.second;
        }
        return ans;
    }
};