class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans = "";
        int zero = 0, one = 0;
        for (auto i : s) {
            if (i == '0') zero++;
            else one++;
        }
        ans += '1';
        one--;
        while(zero) {
            ans += '0';
            zero--;
        }
        while(one) {
            ans += '1';
            one--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};