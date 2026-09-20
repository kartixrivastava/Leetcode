class Solution {
public:
    int reverseDegree(string s) {
        long long int result = 0;
        for (int i = 0; i < s.length(); i++) {
            int revIdx = 'z' - s[i] + 1;
            result += revIdx * (i + 1);
        }
        return result;
    }
};