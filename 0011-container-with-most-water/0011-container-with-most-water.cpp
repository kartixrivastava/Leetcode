class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int mostWater = 0;
        while (left < right) {
            int w = right - left;
            int area = min(height[left], height[right]) * w;
            mostWater = max(mostWater, area);
            if (height[left] < height[right])
                left++;
            else {
                right--;
            }
        }
        return mostWater;
    }
};