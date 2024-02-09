class Solution {
public:
    int furthestBuilding(vector<int>& v, int bricks, int ladders) {
        int n = v.size();
        priority_queue<int> pq;
        for (int i = 1; i < n; ++i) {
            int diff = v[i] - v[i - 1];
            if (diff <= 0) continue;
            pq.push(diff);
            bricks -= diff;
            if (bricks < 0) {
                if (ladders == 0) return i - 1;
                ladders--;
                bricks += pq.top();
                pq.pop();
            }
        }
        return n - 1;
    }
};