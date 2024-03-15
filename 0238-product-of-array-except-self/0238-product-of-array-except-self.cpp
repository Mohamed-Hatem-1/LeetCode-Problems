class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n = v.size();
        vector<int> prx(n), sfx(n);
        prx[0] = sfx[n - 1] = 1;
        for(int i = 1; i < n; ++i) prx[i] = prx[i - 1] * v[i - 1];
        for(int i = n - 2; i >= 0; --i) sfx[i] = sfx[i + 1] * v[i + 1];
        for (auto i : prx) cout << i << " "; cout << "\n";
        for (auto i : sfx) cout << i << " "; cout << "\n";
        vector<int> ans(n);
        for(int i = 0; i < n; i++) ans[i] = prx[i] * sfx[i];
        return ans;
    }
};