class Solution {
public:
    bool isPrime(int x) {
        if (x <= 1)
            return false;
        for (int i = 2; i *i<= x; i++) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int m = nums.size();
        int ans = 0;
        for (int i = 0; i < m; i++) {
            if (isPrime(nums[i][i])) {
                ans = max(ans, nums[i][i]);
            }
            if (i != m - i - 1 && isPrime(nums[i][m - i - 1])) {
                ans = max(ans, nums[i][m - i - 1]);
            }
        }
        return ans;
    }
};