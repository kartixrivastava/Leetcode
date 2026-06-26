class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        int minVal = *min_element(nums.begin(), nums.end());
        int result = 0;
        for (int x : nums) {
            if (x > minVal && x < maxVal) {
                result++;
            }
        }
        return result;
    }
};