class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> pascalTriangle;
        for (int i = 0; i < n; i++) {
            vector<int> rows(i + 1);
            for (int j = 0; j < i + 1; j++) {
                if (j == 0 || j == i) {
                    rows[j] = 1;
                } else {
                    rows[j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
                }
            }
            pascalTriangle.push_back(rows);
        }
        return pascalTriangle;
    }
};