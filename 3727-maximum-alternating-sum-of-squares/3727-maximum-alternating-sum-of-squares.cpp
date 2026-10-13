class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(), nums.end());
        long long maxSum = 0, minSum = 0;
        for (int i = 0; i < nums.size() / 2; i++) {
            minSum += nums[i];
        }
        for (int i = nums.size() / 2; i < nums.size(); i++) {
            maxSum += nums[i];
        }
        return maxSum - minSum;
    }
};