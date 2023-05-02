class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cntP = 0, cntN = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) return 0;
            else {
                if (nums[i] < 0) cntN++;
                else cntP++;
            }
        }
        if ((cntN % 2)) return -1;
        else return 1;
    }
};