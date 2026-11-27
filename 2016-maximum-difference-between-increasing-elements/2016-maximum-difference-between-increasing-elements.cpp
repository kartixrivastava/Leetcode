class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minValue = nums[0];
        int maxDiff = INT_MIN;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > minValue) {
                maxDiff = max(maxDiff, nums[i] - minValue);
            } else {
                minValue = nums[i];
            }
        }
        return maxDiff == INT_MIN ? -1 : maxDiff;
    }
};