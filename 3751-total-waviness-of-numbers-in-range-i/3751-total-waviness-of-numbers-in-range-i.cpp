class Solution {
public:
    int waviness(int x) {
        string st = to_string(x);
        long long waves = 0;
        for (int i = 1; i < st.size() - 1; i++) {
            if ((st[i] > st[i - 1] && st[i] > st[i + 1]) ||
                (st[i] < st[i - 1] && st[i] < st[i + 1])) {
                waves++;
            }
        }
        return waves;
    }
    int totalWaviness(int num1, int num2) {
        long long result = 0;
        for (int i = num1; i <= num2; i++) {
            result += waviness(i);
        }
        return result;
    }
};