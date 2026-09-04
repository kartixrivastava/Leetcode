class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxVal, minVal;
        for (int i = 0; i < nums.size(); i++) {
            maxVal = minVal = nums[i];
            for (int j = 0; j < i; j++) {
                maxVal = max(nums[j], maxVal);
            }
            for (int j = i + 1; j < nums.size(); j++) {
                minVal = min(nums[j], minVal);
            }
            if (maxVal - minVal <= k) {
                return i;
            }
        }
        return -1;
    }
};