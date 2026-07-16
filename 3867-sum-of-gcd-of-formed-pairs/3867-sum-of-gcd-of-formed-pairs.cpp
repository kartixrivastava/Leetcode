class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long result = 0;
        int maxTillNow = INT_MIN;
        for (int & x : nums) {
            maxTillNow = max(maxTillNow, x);
            x = gcd(maxTillNow, x);
        }
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            result += gcd(nums[i], nums[j]);
            i++;
            j--;
        }
        return result;
    }
};