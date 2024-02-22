class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();
        if (n == 1) {
            if (v[0] == 9) return {1, 0};
            else {
                v[0]++;
                return v;
            }
        } else {
            for (int i = n - 1; i >= 0; i--) {
                if (i == n - 1) {
                    if (v[i] == 9) {
                        v[i] = 0;
                        v[i - 1]++;
                    } else {
                        v[i]++;
                        return v;
                    }
                } else if (i == 0) {
                    if (v[i] == 10) {
                        v[i] = 0;
                        v.insert(v.begin(), 1);
                    }
                    return v;
                } else {
                    if (v[i] == 10) {
                        v[i] = 0;
                        v[i - 1]++;
                    }
                }
            }
            return v;
        }
    }
};