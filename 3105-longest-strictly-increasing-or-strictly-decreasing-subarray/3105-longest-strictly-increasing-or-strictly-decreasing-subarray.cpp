class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int low = 1, high = 1,best =1;
        for (int i = 1; i < nums.size(); i++) {
            high = nums[i - 1] < nums[i] ? high + 1 : 1;
            low = nums[i - 1] > nums[i] ? low + 1 : 1;
            best = max({low, high, best});
        }
        return best;
    }
};