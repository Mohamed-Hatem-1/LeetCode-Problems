class Solution {
public:
    bool isPalindrome(int x) {
        long long org = x;
        long long alt = 0;
        while (x > 0) {
            alt = alt * 10 + (x % 10);
            x /= 10;
        }
        return alt == org;
    }
};