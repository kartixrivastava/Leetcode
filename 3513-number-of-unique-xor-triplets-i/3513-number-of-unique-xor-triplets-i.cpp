class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        if (nums.size() < 3) {
            return nums.size();
        }
        int result = 1;
        while (result <= nums.size()) {
            result <<= 1;
        }
        return result;
    }
};