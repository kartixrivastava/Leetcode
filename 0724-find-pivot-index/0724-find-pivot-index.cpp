class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftSum = 0, rightSum = 0, totalSum = 0;
        for (int k : nums) {
            totalSum += k;
        }
        int currentSum = 0;
        for (int i = 0; i < n; i++) {
            currentSum += nums[i];
            leftSum = currentSum - nums[i];
            rightSum = totalSum - leftSum - nums[i];
            if (leftSum == rightSum) {
                return i;
            }
        }
        return -1;
    }
};