class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        for (int i = 0; i < n/2; ++i) {
            if (s[i] != s[n-i-1]) return false;
        }
        return true;
    }
    int countSubstrings(string s) {
        int n = s.size();
        unordered_multiset<string> ums;
        for (int i = 0; i < n; ++i) {
            string sub = "";
            for (int j = i; j < n; ++j) {
                sub += s[j];
                if (isPalindrome(sub)) ums.insert(sub);
            }
        }
        return ums.size();
    }
};