class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.size();
        int mid = n / 2;
        for (int i = 0; i < mid; ++i) {
            if (s[i] != s[n - i - 1]) {
                s[i] = min(s[i], s[n - i - 1]);
                s[n - i - 1] = min(s[i], s[n - i - 1]);
            }
        }
        return s;
    }
};