class Solution {
public:
    int finalValueAfterOperations(vector<string>& v) {
        int ans = 0;
        for (auto i : v) {
            if (i == "--X" || i == "X--") ans--;
            else ans++;
        }
        return ans;
    }
};