class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mapp;
        for (int x : arr) {
            mapp[x]++;
        }
        int result = INT_MIN;
        for (auto x : mapp) {
            if (x.first == x.second) {
                result = max(result, x.second);
            }
        }
        return result == INT_MIN ? -1 : result;
    }
};