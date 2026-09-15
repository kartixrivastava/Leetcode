class Solution {
public:
    int encrypt(int x) {
        if (x < 10) {
            return x;
        }
        int count = 0;
        int maxNum = INT_MIN;
        while (x) {
            maxNum = max(maxNum, x % 10);
            count++;
            x /= 10;
        }

        int result = 0;
        for (int i = 1; i <= count; i++) {
            result = result * 10 + maxNum;
        }
        return result;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += encrypt(nums[i]);
        }
        return sum;
    }
};