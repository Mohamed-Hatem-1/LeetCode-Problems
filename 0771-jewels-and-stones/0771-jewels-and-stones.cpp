class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0, n = stones.size();
        for (int i = 0; i < n; ++i) {
            if (count(jewels.begin(), jewels.end(), stones[i])) cnt++;
        }
        return cnt;
    }
};