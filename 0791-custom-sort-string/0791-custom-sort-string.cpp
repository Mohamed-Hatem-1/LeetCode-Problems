class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        map<char, int> mp;
        for (auto i : s) mp[i]++;
        for (auto i : order) {
            while (mp[i]--) ans += i;
        }
        for (auto i : mp) cout << i.first << " " << i.second << "\n";
        for (auto i : mp) while (i.second-- > 0) ans += i.first;
        return ans;
    }
};