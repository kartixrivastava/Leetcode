class Solution {
public:
    int convert(string r) {
        int result = 0;
        for (int i = 0; i < r.length(); i++) {
            char ch = r[i];
            result = result * 10 + (ch - 'a');
        }
        return result;
    }
    bool isSumEqual(string a, string b, string c) {
        int x = convert(a);
        int y = convert(b);
        int z = convert(c);
        return x + y == z;
    }
};
