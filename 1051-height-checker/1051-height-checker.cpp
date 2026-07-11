class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> newVector;
        for (int x : heights) {
            newVector.push_back(x);
        }
        int count = 0;
        sort(newVector.begin(), newVector.end());
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != newVector[i]) {
                count++;
            }
        }
        return count;
    }
};