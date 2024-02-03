class Solution {
public:
    string defangIPaddr(string s) {
        string ans = "";
        for (auto i : s) {
            if (i != '.') ans += i;
            else ans += "[.]";
        }
        return ans;
    }
};