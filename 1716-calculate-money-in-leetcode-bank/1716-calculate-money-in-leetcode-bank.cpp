class Solution {
public:
    int totalMoney(int n) {
        if (n <= 7)
            return (n * (n + 1)) >> 1;
        int q = n / 7;
        int r = n % 7;
        return 28 * q + 7 * (q - 1)*q/2 + (r * (r + 1) >> 1) + r * q;
    }
};