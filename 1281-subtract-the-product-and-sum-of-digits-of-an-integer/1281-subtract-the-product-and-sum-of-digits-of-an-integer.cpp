class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0, num = n;
        while(n) {
            product *= n % 10;
            n /= 10;
        }
        while(num) {
            sum += num % 10;
            num /= 10;
        }
        return product - sum;
    }
};