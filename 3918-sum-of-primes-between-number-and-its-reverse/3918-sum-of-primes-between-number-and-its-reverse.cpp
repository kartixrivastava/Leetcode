class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        int a = 0;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                a = 1;
                break;
            }
        }
        return a == 0;
    }
    int reverse(int n) {
        int ans = 0;
        while (n > 0) {
            int ld = n % 10;
            ans = ans * 10 + ld;
            n /= 10;
        }
        return ans;
    }
    int sumOfPrimesInRange(int n) {
        int reversedNum = reverse(n);
        int result = 0;
        for (int i = min(n, reversedNum); i <= max(n, reversedNum); i++) {
            if (isPrime(i)) {
                result += i;
            }
        }
        return result;
    }
};