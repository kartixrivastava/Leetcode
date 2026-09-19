class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> abcd;
        for (int x : nums) {
            abcd[x]++;
        }
        int sum = 0;
        for (auto k : abcd) {
            if (k.second == 1) {
                sum += k.first;
            }
        }
        return sum;
    }
};