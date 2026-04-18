class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";
        if (strs.size() == 1)
            return strs[0];

        int len = INT_MAX;
        for (int i = 0; i < strs.size() - 1; i++) {
            string s1 = strs[i];
            string s2 = strs[i + 1];
            int j = 0;
            while (j < s1.length() && j < s2.length() && s1[j] == s2[j]) {
                j++;
            }
            len = min(len, j); // keep the shortest match so far
        }
        if (len == 0 || len == INT_MAX)
            return "";
        return strs[0].substr(0, len);
    }
};