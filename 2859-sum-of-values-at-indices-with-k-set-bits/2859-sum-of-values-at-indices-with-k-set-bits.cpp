class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size(), sum = 0;
        for (int i = 0; i < n; ++i) {
            int ones = __builtin_popcount(i);
            if (ones == k) sum += nums[i];
        }
        return sum;
    }
};