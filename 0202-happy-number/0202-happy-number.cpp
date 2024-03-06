class Solution {
public:
    bool isHappy(int n) {
        if (n == 1) return true;
        else {
            map<long long, bool> mp;
            mp[n] = true;
            while(true) {
                long long sm = 0;
                while (n) {
                    sm += (n % 10) * (n % 10);
                    n /= 10;
                }
                cout << sm << "\n";
                if (sm == 1) return true;
                if (mp[sm]) return false;
                mp[sm] = true;
                n = sm;
            }
        }
    }
};