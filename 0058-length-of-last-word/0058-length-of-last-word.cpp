class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int ans = 0;
        bool found = 1;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ' && found) {
                
            } else if (s[i] == ' ' && !found) {
                break;
            } else {
                found = 0;
                ans++;
            }
        }
        return ans;
    }
};