class Solution {
public:
    vector<int> rearrangeArray(vector<int>& v) {
        int n = v.size();
        vector<int> positives, negatives;
        for (int i = 0; i < n; ++i) {
            if (v[i] > 0) positives.push_back(v[i]);
            else negatives.push_back(v[i]);
        }
        int mid = n / 2;
        vector<int> ans;
        for (int i = 0; i < mid; ++i) {
            ans.push_back(positives[i]);
            ans.push_back(negatives[i]);
        }
        return ans;
    }
};