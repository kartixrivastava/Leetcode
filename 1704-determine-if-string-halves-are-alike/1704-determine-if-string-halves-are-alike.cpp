class Solution {
public:
    bool isMyVowel(char ch) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int i = 0;
        int j = s.size() / 2;
        int c1 = 0, c2 = 0;
        while (i < j && j < s.size()) {
            if (isMyVowel(s[i])) {
                c1++;
            }
            if (isMyVowel(s[j])) {
                c2++;
            }
            i++, j++;
        }
        return c1 == c2;
    }
};