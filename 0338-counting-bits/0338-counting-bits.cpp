class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        for (int i = 0; i < ans.size(); i++) {
            int val = i;
            int count = 0;
            while (val != 0) {
                val = val & (val - 1);
                count++;
            }
            ans[i] = count;
        }
        return ans;
    }
};