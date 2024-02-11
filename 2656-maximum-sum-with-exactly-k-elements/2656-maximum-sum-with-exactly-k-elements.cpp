class Solution {
public:
    int maximizeSum(vector<int>& v, int k) {
        int n = v.size();
        sort(v.rbegin(), v.rend());
        int sum = 0;
        while(k--) {
            sum += v[0];
            v[0]++;
        }
        return sum;
    }
};