class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int pairs = 0;
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            if (nums[left] + nums[right] < target) {
                pairs += (right - left);
                left++;
            } else {
                right--;
            }
        }
        return pairs;
    }
};
