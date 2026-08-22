class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, product = 1;
        int k = n;
        while (k) {
            int ld = k % 10;
            sum += ld;
            product *= ld;
            k /= 10;
        }
        return (n % (sum + product) == 0);
    }
};