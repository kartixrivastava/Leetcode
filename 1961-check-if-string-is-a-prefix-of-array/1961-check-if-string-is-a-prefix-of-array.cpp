class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string st = "";
        for (string t : words) {
            st += t;
            if (st == s)
                return true;
        }
        return false;
    }
};
