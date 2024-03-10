class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        map<int, int> mp1, mp2;
        for (auto i : v1) mp1[i]++;
        for (auto i : v2) mp2[i]++;
        set<int> st;
        if (v1.size() > v2.size()) {
            set<int> st;
            for (auto i : v2) {
                if (mp1[i] && mp2[i]) st.insert(i);
            }
            vector<int> ans;
            for (auto i : st) ans.push_back(i);
            return ans;
        } else {
            set<int> st;
            for (auto i : v1) {
                if (mp1[i] && mp2[i]) st.insert(i);
            }
            vector<int> ans;
            for (auto i : st) ans.push_back(i);
            return ans;
        }
    }
};