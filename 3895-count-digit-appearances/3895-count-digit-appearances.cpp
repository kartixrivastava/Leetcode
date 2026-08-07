class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int result = 0;
        for (int x : nums) {
            int count = 0;
            while (x) {
                int last = x % 10;
                if (last == digit)
                    count++;
                x /= 10;
            }
            result += count;
        }
        return result;
    }
};
