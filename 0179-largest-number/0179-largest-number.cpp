class Solution {
public:
    static bool comp(int a, int b) {
        return (to_string(a) + to_string(b) > to_string(b) + to_string(a));
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), comp);
        if (nums[0] == 0)
            return to_string(nums[0]);
        string s = "";
        for (int value : nums) {
            s += to_string(value);
        }
        return s;
    }
};