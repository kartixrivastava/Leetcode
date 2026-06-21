class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        // int k = 1;
        int idx = 1;
        for(int i = 1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                // k++;
                nums[idx] = nums[i];
                idx++;
            }
        }
        return idx;
    }
};
