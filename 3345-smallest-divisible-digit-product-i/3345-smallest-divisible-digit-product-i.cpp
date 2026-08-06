class Solution {
public:
    int digitProduct(int x) {
        int product = 1;
        while (x) {
            int ld = x % 10;
            product *= ld;
            x /= 10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        for (int i = n; i <= 100; i++) {
            if (digitProduct(i) % t == 0)
                return i;
        }
        return 0;
    }
};