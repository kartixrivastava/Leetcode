class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int ans = nums[0];
        for(int k:nums){
            ans = gcd(ans,k);
        }
    return ans==1;
    }
};