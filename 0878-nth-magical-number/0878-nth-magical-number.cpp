class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long l = 1, r = 1e18;
        long long lcm = (long long)a * b / gcd(a, b);
        int mod = 1e9 + 7;

        while (l < r) {
            long long mid = l - (l - r) / 2;
            long long count = mid / a + mid / b - mid / lcm;

            if (count < n)
                l = mid + 1;
            else
                r = mid;
        }
        return l % mod;
    }
};