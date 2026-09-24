class Solution {
public:
    int sumOfDigits(int x) {
        int sum = 0;
        while (x) {
            int ld = x % 10;
            sum = sum + ld;
            x /= 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (i == sumOfDigits(nums[i])) {
                return i;
            }
        }
        return -1;
    }
};