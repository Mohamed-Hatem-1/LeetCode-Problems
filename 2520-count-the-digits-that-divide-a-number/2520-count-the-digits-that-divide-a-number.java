class Solution {
    public int countDigits(int n) {
        int num = n, cnt = 0;
        while(num > 0) {
            int digit = num % 10;
            if (n % digit == 0) cnt++;
            num /= 10;
        }
        return cnt;
    }
}