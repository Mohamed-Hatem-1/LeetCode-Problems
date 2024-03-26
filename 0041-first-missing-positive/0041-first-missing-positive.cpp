class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        map<int, int> mp;
        for (auto i : nums) mp[i]++;
        for (int i = 1; i <= n; ++i) {
            if (mp[i] < 1) {
                return i;
            }
        }
        return n + 1;
    }
};