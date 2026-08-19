class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int totalWater = 0;

        int leftMax = 0;
        int rightMax = 0;

        int start = 0;
        int end = n - 1;

        while (start < end) {
            leftMax = max(leftMax, height[start]);
            rightMax = max(rightMax, height[end]);

            if (leftMax < rightMax) {
                totalWater += leftMax - height[start];
                start++;
            } else {
                totalWater += rightMax - height[end];
                end--;
            }
        }

        return totalWater;
    }
};