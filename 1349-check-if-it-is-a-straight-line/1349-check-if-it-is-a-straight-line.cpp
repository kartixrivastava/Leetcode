class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& matrix) {
        int x0 = matrix[0][0];
        int x1 = matrix[1][0];
        int y0 = matrix[0][1];
        int y1 = matrix[1][1];

        for (int i = 2; i < matrix.size() ; i++) {
            int x = matrix[i][0];
            int y = matrix[i][1];

            if ((y1 - y0) * (x - x0) != (y - y0) * (x1 - x0))
                return false;
        }
        return true;
    }
};