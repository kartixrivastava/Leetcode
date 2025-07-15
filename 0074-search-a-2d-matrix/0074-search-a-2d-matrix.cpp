class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int st = 0;
        int end = m * n - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            int mid_element = matrix[mid / n][mid % n];
            if (mid_element == target) {
                return true;
            } else if (mid_element > target) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return false;
    }
};