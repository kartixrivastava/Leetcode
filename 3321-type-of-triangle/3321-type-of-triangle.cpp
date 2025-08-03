class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int p = nums[0], q = nums[1], r = nums[2];

        if (p + q <= r) {
            return "none";
        }

        if (p == q && q == r) {
            return "equilateral";
        } else if (p == q || q == r || p == r) {
            return "isosceles";
        } else {
            return "scalene";
        }
    }
};
