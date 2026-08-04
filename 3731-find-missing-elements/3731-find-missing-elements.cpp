class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        vector<int> result;

        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        for (int x = mn; x <= mx; x++) {
            if (s.find(x) == s.end()) {
                result.push_back(x);
            }
        }

        return result;
    }
};