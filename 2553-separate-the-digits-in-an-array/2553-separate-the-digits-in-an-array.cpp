class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int x : nums) {
            if (x == 0) {
                count++;
            }
            while (x) {
                count++;
                x /= 10;
            }
        }

        vector<int> ans(count);
        int idx = count - 1;

        for (int i = n - 1; i >= 0; i--) {
            int x = nums[i];

            while (x) {
                ans[idx--] = x % 10;
                x /= 10;
            }
        }

        return ans;
    }
};