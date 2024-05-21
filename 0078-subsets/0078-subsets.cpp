class Solution {
public:
    vector<vector<int>> subsets(vector<int>& v) {
        int n = v.size();
        int subsets = (1 << n);
        vector<vector<int>> ans;
        for (int i = 0; i < subsets; ++i) {
            vector<int> temp;
            for (int j = 0; j < n; ++j) {
                if(i & (1 << j)) temp.push_back(v[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};