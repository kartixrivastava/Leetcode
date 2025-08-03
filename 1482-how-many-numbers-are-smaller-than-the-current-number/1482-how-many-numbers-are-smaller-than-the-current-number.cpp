class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int curr = nums[i];
            for (int k = 0; k < n; k++) {
                if (i != k && nums[k] < curr) {
                    count++;
                }
            }
            answer.push_back(count);
            count = 0;
        }
        return answer;
    }
};