class Solution {
public:
    int maxDepth(string s) {
        int result = 0;
        int count = 0;
        for (char ch : s) {
            if (ch == '(') {
                count++;
                result = max(result, count);
            } else if (ch == ')') {
                count--;
            }
        }

        return result;
    }
};