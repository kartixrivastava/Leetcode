class Solution {
public:
    int minAddToMakeValid(string s) {
        string st;
        for (char c : s) {
            if (c == ')' && !st.empty() && st.back() == '(') {
                st.pop_back();
            } else {
                st.push_back(c);
            }
        }
        return st.size();
    }
};