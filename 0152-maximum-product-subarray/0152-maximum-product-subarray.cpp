class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProduct = INT_MIN;
        int currentProduct = 1;
        for (int i = 0; i < n; i++) {
            currentProduct *= nums[i];
            maxProduct = max(maxProduct, currentProduct);
            if (currentProduct == 0) {
                currentProduct = 1;
            }
        }
        currentProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            currentProduct *= nums[i];
            maxProduct = max(maxProduct, currentProduct);
            if (currentProduct == 0) {
                currentProduct = 1;
            }
        }
        return maxProduct;
    }
};