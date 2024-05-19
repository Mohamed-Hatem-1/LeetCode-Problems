class Solution {
public:
    int getMaxValue(int i, int j, vector<vector<int>>& grid) {
        return max({grid[i][j], grid[i][j + 1], grid[i][j + 2],
                   grid[i + 1][j], grid[i + 1][j + 1], grid[i + 1][j + 2],
                   grid[i + 2][j], grid[i + 2][j + 1], grid[i + 2][j + 2]});
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n - 2, vector<int> (n - 2, 0));
        for (int i = 0; i < n - 2; ++i) {
            for (int j = 0; j < n - 2; ++j) {
                ans[i][j] = getMaxValue(i, j, grid);
            }
        }
        return ans;
    }
};