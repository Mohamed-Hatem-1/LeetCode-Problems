class Solution {
public:
    int numberOfSteps(int num) {
        int cnt = 0;
        while (num > 0) {
            cnt++;
            if (num % 2) num--;
            else num /= 2;
        }
        return cnt;
    }
};