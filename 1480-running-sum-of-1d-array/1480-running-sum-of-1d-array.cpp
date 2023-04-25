class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prx(n);
        prx[0] = nums[0];
        for(int i = 1; i < n; ++i) {
            prx[i] = prx[i - 1] + nums[i];
        }
        return prx;
    }
};