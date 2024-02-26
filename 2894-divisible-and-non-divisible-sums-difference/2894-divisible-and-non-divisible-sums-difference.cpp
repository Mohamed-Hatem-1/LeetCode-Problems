class Solution {
public:
    int differenceOfSums(int n, int m) {
        if (m > n) return n * (n + 1) / 2;
        else if (m == 1) return -1 * n * (n + 1) / 2;
        else if (m == n) return n * (n - 1) / 2 - m;
        else {
            long long sum = n * (n + 1) / 2;
            if (m * 2 > n) {
                return sum - m - m;
            } else {
                int first = m, last = n - (n % m);
                int sz = n / m;
                long long num2 = (first + last) * sz / 2;
                long long num1 = sum - num2;
                return num1 - num2;
            }
        }
    }
};