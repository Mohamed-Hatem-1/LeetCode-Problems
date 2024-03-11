class Solution {
    public:
    string customSortString(string order, string s) {
        unordered_map<char, int> freq;
        for (char letter : s) freq[letter]++;

        string result = "";
        for (auto letter : order) {
            while (freq[letter]-- > 0) result += letter;
        }

        for (auto &i : freq) { 
            while (i.second-- > 0) result += i.first;
        }

        return result;
    }
};