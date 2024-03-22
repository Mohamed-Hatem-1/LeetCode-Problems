class Solution {
public:
    int singleNumber(vector<int>& v) {
        int n = v.size();
        for (int i = 0; i < n - 1; ++i) v[i + 1] = v[i] ^ v[i + 1];
        return v[n - 1];
    }
};