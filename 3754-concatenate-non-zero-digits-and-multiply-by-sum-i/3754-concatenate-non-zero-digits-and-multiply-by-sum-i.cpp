class Solution {
public:
    int sum(int n) {
        int result = 0;
        while (n) {
            int ld = n % 10;
            result += ld;
            n /= 10;
        }
        return result;
    }
    long long sumAndMultiply(int n) {
        int m = n;
        int num = 0;
        int place = 1;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                num += digit * place;
                place *= 10;
            }
            n /= 10;
        }
        return 1LL * num * sum(m);
    }
};
