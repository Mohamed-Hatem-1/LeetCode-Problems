class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size(), ans = 0;
        map<char, int> mp;
        for (auto i : s) mp[i]++;
        ans += mp.begin()->second;
        for (auto it = ++mp.begin(); it != mp.end(); ++it) {
            if (it->second % 2 == 0) ans += it->second;
            else {
                if (ans % 2) ans += it->second / 2 * 2;
                else ans += it->second;
            }
        }
        return ans;
    }
};