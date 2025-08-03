class Solution {
public:
    bool myIsDigit(char ch) { return (ch >= '0' && ch <= '9'); }

    long long int myAtoi(string s) {
        int i = 0;
        long long int result = 0;
        bool isNegative = false;
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            isNegative = (s[i] == '-');
            i++;
        }
        while (i < s.length() && myIsDigit(s[i])) {
            char ch = s[i];
            result = result * 10 + (ch - '0');
            i++;
            if (!isNegative && result > INT_MAX)
                return INT_MAX;
            if (isNegative && -result < INT_MIN)
                return INT_MIN;
        }
        if (isNegative) {
            result = -1 * result;
        }
        return result;
    }
};