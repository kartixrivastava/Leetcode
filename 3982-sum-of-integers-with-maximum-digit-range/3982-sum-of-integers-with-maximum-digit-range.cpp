class Solution {
public:
    int range(int x) {
        if (x == 0)
            return 0;
        int mx = 0;
        int mn = 9;
        while (x) {
            mx = max(mx, x % 10);
            mn = min(mn, x % 10);
            x /= 10;
        }
        return mx - mn;
    }
    int maxDigitRange(vector<int>& nums) {
        int maxRange = -1;
        for (int x : nums) {
            maxRange = max(maxRange, range(x));
        }
        int sum = 0;
        for (int i : nums) {
            if (range(i) == maxRange) {
                sum += i;
            }
        }
        return sum;
    }
};