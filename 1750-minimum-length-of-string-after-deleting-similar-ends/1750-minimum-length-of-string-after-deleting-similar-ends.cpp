class Solution {
public:
    int minimumLength(string s) {
        int n = s.size(), l = 0, r = n - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                break;
            } else {
                char x = s[l];
                while ((s[l] == x || s[r] == x) && l <= r) {
                    if (s[l] == x) l++;
                    if (s[r] == x) r--;
                }
            }
        }
        cout << l << " " << r << "\n";
        if (r < l) return 0;
        return r - l + 1;
    }
};