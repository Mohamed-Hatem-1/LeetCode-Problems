class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for (int i = 0; i < n; ++i) {
            string str = words[i];
            string reversedStr = str;
            reverse(reversedStr.begin(), reversedStr.end());
            if (str == reversedStr) return str;
        }
        return "";
    }
};