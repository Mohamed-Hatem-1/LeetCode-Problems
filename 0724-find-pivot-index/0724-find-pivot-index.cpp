class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        long long leftSum = 0;
        for (auto i : nums) sum += i;
        for (int i = 0; i < n; ++i) {
            sum -= nums[i];
            if (sum == leftSum) return i;
            else leftSum += nums[i];
        }
        return -1;
    }
};