class Solution {
public:
    int minTimeToType(string s) {
        int n = s.size();
        char now = 'a';
        int cnt = s.size();
        for (int i = 0; i < n; ++i) {
            int current = int(now);
            int next = int(s[i]);
            int t = abs(current - next);
            int tt = 26 - t;
            cnt += min(t, tt);
            now = s[i];
        }
        return cnt;
    }
};