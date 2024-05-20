class Solution {
public:
    vector<vector<int>> subsets(vector<int>& v) {
    vector<vector<int>> ans;
    int n = v.size();
    for(int i = 0; i < (1 << n); ++i) {
        vector<int> temp;
        for(int j = 0; j < n; ++j) {
            if(i & (1 << j)) temp.push_back(v[j]);
        }
        ans.push_back(temp);
    }
    return ans;
    }
    int subsetXORSum(vector<int>& v) {
        vector<vector<int>> ans = subsets(v);
        int sum = 0;
        for (int i = 1; i < ans.size(); ++i) {
            int temp = ans[i][0];
            for (int j = 1; j < ans[i].size(); ++j) {
                temp ^= ans[i][j];
            }
            sum += temp;
        }
        return sum;
    }
};