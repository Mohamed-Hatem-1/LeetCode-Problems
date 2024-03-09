class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> v;
        for (int i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                if (i * i == n) v.push_back(i);
                else {
                    v.push_back(i); v.push_back(n / i);
                }
            }
        }
        sort(v.begin(), v.end());
        for (auto i : v) cout << i << " "; cout << "\n";
        if (k > v.size()) return -1;
        else return v[k - 1];
    }
};