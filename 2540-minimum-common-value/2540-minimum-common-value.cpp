class Solution {
public:
    int getCommon(vector<int>& v1, vector<int>& v2) {
        int n1 = v1.size(), n2 = v2.size();
        map<int, int> mp1, mp2;
        for (auto i : v1) mp1[i]++;
        for (auto i : v2) mp2[i]++;
        if (n1 > n2) {
            for (int i = 0; i < n2; ++i) {
                if (mp1[v2[i]] && mp2[v2[i]]) return v2[i];
            }
            return -1;
        } else {
            for (int i = 0; i < n1; ++i) {
                if (mp1[v1[i]] && mp2[v1[i]]) return v1[i];
            }
            return -1;
        }
    }
};