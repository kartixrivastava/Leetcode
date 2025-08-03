class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> result(n + 1, 1);
        for (int i = 0; i < n; i++) {
            for (int j = i; j > 0; j--) {
                result[j] += result[j - 1];
            }
        }
        return result;
    }
};