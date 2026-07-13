class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> digits;
        for (int i = 1; i <= 9; i++) {
            digits.push_back(i);
        }
        for (int i = 0; i < digits.size(); i++) {
            int last = digits[i] % 10;
            if (last < 9)
                digits.push_back(digits[i] * 10 + last + 1);
        }
        vector<int> result;
        for (int x : digits) {
            if (x >= low && x <= high) {
                result.push_back(x);
            }
        }
        return result;
    }
};