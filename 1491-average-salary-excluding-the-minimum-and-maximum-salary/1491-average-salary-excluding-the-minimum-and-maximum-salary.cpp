class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size() - 2;
        int maxVal = INT_MIN, minVal = INT_MAX;
        for (int x : salary) {
            maxVal = max(maxVal, x);
            minVal = min(minVal, x);
        }
        double sum = 0;
        for (int x : salary) {
            sum += x;
        }
        double ans = (sum - (maxVal + minVal)) / n;
        return ans;
    }
};
