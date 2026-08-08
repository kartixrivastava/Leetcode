class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if (num % 3 == 0) {
            long long int oneThird = num / 3;
            return {oneThird - 1, oneThird, oneThird + 1};
        }
        return {};
    }
};