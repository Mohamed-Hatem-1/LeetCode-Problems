class Solution {
public:
    vector<int> relativeSortArray(vector<int>& v1, vector<int>& v2) {
        vector<int> ans;
        set<int> st;
        int x = v1.size(), y = v2.size();
        map<int, int> mp1, mp2;
        for (auto i : v1) mp1[i]++;
        for (auto i : v2) {
            mp2[i]++;
            st.insert(i);
        }
        for (auto i : v2) {
            for (int j = 0; j < mp1[i]; ++j) ans.push_back(i);
        }
        vector<int> mini;
        for (auto i : v1) {
            if (!st.contains(i)) mini.push_back(i);
        }
        sort(mini.begin(), mini.end());
        for (auto i : mini) ans.push_back(i);
        return ans;
    }
};