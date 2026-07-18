class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = 1001, mx = 0;
        for (int x : nums) {
            mn = min(x, mn);
            mx = max(x, mx);
        }
        return gcd(mn, mx);
    }
};
