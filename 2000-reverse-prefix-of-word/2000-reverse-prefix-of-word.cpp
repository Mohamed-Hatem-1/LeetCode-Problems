class Solution {
public:
    string reversePrefix(string s, char ch) {
        int it = s.find(ch);
        if (it < 0) return s;
        reverse(s.begin(), s.begin() + it + 1);
        return s;
    }
};