class Solution {
public:
    int digitFrequencyScore(int n) {
        int result = 0;
        while (n > 0) {
            int last = n % 10;
            result += last;
            n /= 10;
        }
        return result;
    }
};