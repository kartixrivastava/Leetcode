// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if (nums[i] == nums[j]) {
//                     nums[i] = nums[j] = INT_MIN;
//                 }
//             }
//         }
//         int un ;
//         for (int i = 0; i < n; i++) {
//             if (nums[i] != INT_MIN) {
//                 un = nums[i];
//             }
//         }
//         return un;
//     }
// };

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int res = nums[0];

        for(int i = 1 ; i < nums.size() ; i++){
            res = res ^ nums[i];
        }

        return res;
    }
};