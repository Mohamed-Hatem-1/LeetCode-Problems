class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if(ans > 0) break;
            } else ans++;
        }
        return ans;
    }
};
