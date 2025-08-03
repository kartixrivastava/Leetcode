class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);
        for (int i = 0; i < n * 2;) {
            for (int j = 0; j < n; j++) {
                ans[i] = nums[j];
                i++;
            }
        }
        return ans;
    }
};