class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1, st2;
        for (auto i : nums1) st1.insert(i);
        for (auto i : nums2) st2.insert(i);
        vector<vector<int>> ans(2);
        for (int i = 0; i < ans.size(); ++i) {
            if (i == 0) {
                for (auto j : st1) {
                    if (!st2.count(j)) {
                        ans[i].push_back(j);
                    }
                }
            } else {
                for (auto j : st2) {
                    if (!st1.count(j)) {
                        ans[i].push_back(j);
                    }
                }
            }
        }
            return ans;
    }
};