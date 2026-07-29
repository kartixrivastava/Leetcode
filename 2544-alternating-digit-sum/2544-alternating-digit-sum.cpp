class Solution {
public:
    int alternateDigitSum(int x) {
        int temp = x, sum = 0, sign = -1;
        while (temp > 0) {
            sign = -sign;
            temp /= 10;
        }
        while (x > 0) {
            sum += (x % 10) * sign;
            sign = -sign;
            x /= 10;
        }
        return sum;
    }
};