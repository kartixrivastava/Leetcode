class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result(n);
        for (int i = 0; i < n - 1; i++) {
            result[i] = i + 1;
        }

        result[n - 1] = -n * (n - 1) / 2;
        return result;
    }
};