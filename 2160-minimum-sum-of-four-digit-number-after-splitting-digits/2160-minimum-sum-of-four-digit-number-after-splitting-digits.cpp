class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        string one, two;
        one += s[0]; one += s[2];
        two = s[1]; two += s[3];
        int numOne = stoi(one);
        int numTwo = stoi(two);
        return numOne + numTwo;
    }
};