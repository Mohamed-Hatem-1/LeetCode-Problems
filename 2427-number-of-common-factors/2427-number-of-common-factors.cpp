class Solution {
public:
    int commonFactors(int a, int b) {
        vector<int> divisorsA = getDivisors(a);
        vector<int> divisorsB = getDivisors(b);
        map<int, int> mp;
        for (auto i : divisorsA) mp[i]++;
        for (auto i : divisorsB) mp[i]++;
        int cnt = 0;
        for (auto i : mp) if (i.second > 1) cnt++;
        return cnt;
    }
    vector<int> getDivisors(int n) {
        vector<int> divisors;
        for (int i = 1; i * i <= n; ++i) {
            if (i * i == n) divisors.push_back(i);
            else {
                if (n % i == 0) divisors.push_back(i), divisors.push_back(n / i);
            }
        }
        sort(divisors.begin(), divisors.end());
        return divisors;
    }
};